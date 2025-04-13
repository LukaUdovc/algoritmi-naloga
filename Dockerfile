# Uporabi osnovno C++ sliko
FROM gcc:latest

# Ustvari delovni direktorij
WORKDIR /app

# Kopiraj datoteke
COPY . .

# Prevedi
RUN g++ -o domacaNal1 ./domacaNal1/main.cpp

# Privzeti ukaz
CMD ["./domacaNal1", "input.txt"]
