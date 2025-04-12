#!/bin/bash
set -e

echo "[CI TEST] Prevajam program vaja1..."
g++ -o vaja1 ./vaja1/main.cpp

echo "[CI TEST] Ustvarjam testni vhod..."
echo -e "128\n64\n255" > input.txt

echo "[CI TEST] Zaganjam program..."
./vaja1 input.txt

if [ -f out.txt ]; then
    echo "[CI TEST] OK: izhodna datoteka 'out.txt' obstaja."
else
    echo "[CI TEST] Napaka: izhodna datoteka ne obstaja!"
    exit 1
fi

echo "[CI TEST] Test uspešno zaključen."
