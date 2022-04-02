# Using python cuz strings.
D = {
    'Tetrahedron': 4,
    'Cube': 6,
    'Octahedron': 8,
    'Dodecahedron': 12,
    'Icosahedron': 20
}
summation = 0
cases = int(input())
while cases:
    case = input()
    summation += D[case];
    cases = cases - 1


print(summation)
