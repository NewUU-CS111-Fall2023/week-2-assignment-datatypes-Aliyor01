class LongArithmeticCalculator:
    def calculate_long_arithmetic(self, divisor):
        x = randint(10**99, 10**100 - 1)
        print(f"{x} is a random 100-digit number\n")
        print(float(x / divisor))
