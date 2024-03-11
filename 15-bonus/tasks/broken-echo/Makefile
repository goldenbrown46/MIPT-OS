default: run

echo: echo.c fix.c
	gcc echo.c fix.c -O3 -fsanitize=undefined -o echo

run: echo
	echo -n "That's a public test, private one differs" > data.txt

	python3 tester.py

	rm -rf ./echo ./data.txt

.PHONY: run
