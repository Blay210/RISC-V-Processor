#!/usr/bin/env python3

from pathlib import Path
import argparse


def convert_binary_to_hex(input_path: Path, output_path: Path) -> None:
    data = input_path.read_bytes()

    if len(data) % 4 != 0:
        padding = 4 - (len(data) % 4)
        data += bytes(padding)

    output_path.parent.mkdir(parents=True, exist_ok=True)

    with output_path.open("w", encoding="utf-8") as hex_file:
        for offset in range(0, len(data), 4):
            instruction_bytes = data[offset : offset + 4]

            # RISC-V instruction bytes are stored little-endian.
            instruction = int.from_bytes(
                instruction_bytes,
                byteorder="little",
                signed=False,
            )

            hex_file.write(f"{instruction:08x}\n")


def main() -> None:
    parser = argparse.ArgumentParser(
        description="Convert a little-endian RV32 binary into readmemh word format."
    )
    parser.add_argument("input", type=Path)
    parser.add_argument("output", type=Path)
    args = parser.parse_args()

    if not args.input.is_file():
        raise FileNotFoundError(f"Input binary not found: {args.input}")

    convert_binary_to_hex(args.input, args.output)


if __name__ == "__main__":
    main()