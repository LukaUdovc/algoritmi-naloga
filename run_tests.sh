#!/bin/bash
set -e

echo "[CI TEST] Prevajam domacaNal1.cpp..."
g++ -o domacaNal1 domacaNal1.cpp

echo "[CI TEST] Ustvarjam testni vhod..."
echo -e "128\n64\n255" > input.txt

echo "[CI TEST] Zaganjam program..."
if ./domacaNal1 input.txt; then
    echo "[CI TEST] Program se je uspešno izvedel."
else
    echo "[CI TEST]  Program se je končal z napako!"
    exit 1
fi

if [ -f out.txt ]; then
    echo "[CI TEST]  OK: 'out.txt' obstaja."
    echo "[CI TEST] Vsebina out.txt:"
    cat out.txt
else
    echo "[CI TEST]  Napaka: 'out.txt' ne obstaja!"
    exit 1
fi

echo "[CI TEST]  Test uspešno zaključen."
