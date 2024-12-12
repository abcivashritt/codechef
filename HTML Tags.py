for _ in range(int(input())):
    s = input().strip()
    n = len(s)
    print("Success" if (n > 3 and s[:2] == "</" and s[n-1] == ">" and s[2:n-1].isalnum() and ("a" + s[2:n-1]).islower()) else "Error")
