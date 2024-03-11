import subprocess

def main():
    expected_result = None
    with open("data.txt") as file:
        expected_result = file.read()

    result = subprocess.check_output(f'./echo data.txt', shell=True).decode()
    

    if result != expected_result:
        print(f"Output missmatch: expected \"{expected_result}\", got \"{result}\"")
        exit(1)


if __name__ == "__main__":
    main()
