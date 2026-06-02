#!/usr/bin/env bash

set -e

echo "==================================="
echo "Running RISC-V SV verification regression"
echo "==================================="

make clean
make lint
make all

echo "==================================="
echo "REGRESSION PASSED"
echo "==================================="