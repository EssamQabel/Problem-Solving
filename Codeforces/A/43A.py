n = int(input())
first_team_name, second_team_name = "", ""
first_team_score , second_team_score = 0, 0

for i in range(n):
    input_string = input()
    if i == 0:
        first_team_name = input_string
        first_team_score += 1
        continue
    if input_string == first_team_name:
        first_team_score += 1
        continue
    else:
        second_team_name = input_string
        second_team_score += 1

if first_team_score > second_team_score:
    print(first_team_name)
else:
    print(second_team_name)        