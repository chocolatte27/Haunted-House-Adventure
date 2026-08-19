# Haunted House Adventure

A simple text-based adventure game written in C.

The player explores a haunted house and makes choices that determine whether they survive, find treasure, or meet a spooky end.

## Features

- Interactive choice-based gameplay
- Multiple endings
- Uses nested `if-else` statements
- Beginner-friendly C project

## Project Structure

```
Haunted-House-Adventure/
├── haunted_house.c
└── README.md
```

## How to Run

### Compile

```bash
gcc haunted_house.c -o haunted_house
```

### Execute

```bash
./haunted_house
```

## Gameplay

### Start

```
1. Enter the house
2. Run away
```

### Possible Outcomes

#### Path 1

```
Enter House
→ Upstairs
→ Open Door
```

Result:

```
YOU WIN!
```

#### Path 2

```
Enter House
→ Basement
→ Walk in Darkness
```

Result:

```
YOU WIN!
```

#### Losing Paths

Several choices lead to:

```
GAME OVER!
```

## Concepts Used

- Variables
- User Input (`scanf`)
- Conditional Statements (`if`, `else if`, `else`)
- Nested Decision Making
- Console Output (`printf`)

## Future Improvements

- Add more rooms and story paths
- Add player health
- Add inventory system
- Add score tracking
- Add random ghost encounters

## 👨‍💻 Author

Created as a beginner C programming project for learning decision-making and control flow.
