FROM gcc:latest

WORKDIR /app

COPY . .

RUN g++ -o domacaNal1 domacaNal1.cpp

CMD ["./domacaNal1", "input.txt"]
