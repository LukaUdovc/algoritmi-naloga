#!/bin/bash
set -e

echo "[CI TEST] Prevajam domacaNal1.cpp..."
g++ -o domacaNal1 domacaNal1.cpp

echo "[CI TEST] Ustvarjam testni vhod..."
echo -e "128\n64\n255" > input.txt

echo "[CI TEST] Zaganjam program..."
./domacaNal1 input.txt

if [ -f out.txt ]; then
    echo "[CI TEST] OK: 'out.txt' obstaja."
else
    echo "[CI TEST] Napaka: izhodna datoteka ne obstaja!"
    exit 1
fi

echo "[CI TEST] Test uspešno zaključen."
