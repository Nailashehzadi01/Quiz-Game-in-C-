# 🎮 Interactive Quiz Game

## 📝 Description

An engaging C++ console-based quiz game that tests players' knowledge of world geography, history, and general knowledge. The game features colorful text display, score tracking, and immediate feedback for each answer.

## ✨ Features

- Colorful console interface using Windows API
- Player name personalization
- 10 diverse quiz questions
- Real-time score tracking
- Performance-based feedback
- Option to replay the game
- Clear screen functionality for better user experience

## 🎯 Game Structure

### Questions Categories
1. Geography and Places
2. World Landmarks
3. National Symbols
4. Human Biology
5. Current Affairs
6. World Capitals
7. Cultural Knowledge

## 🛠️ Technical Implementation

### Required Libraries
```cpp
#include<iostream>
#include<windows.h>
#include<string>
```

### Key Components

1. **Color Implementation**
```cpp
HANDLE console_color;
console_color = GetStdHandle(STD_OUTPUT_HANDLE);
```
- Uses Windows API for text coloring
- Cycles through 50 different colors
- Enhances visual appeal

2. **Score System**
- Each correct answer: 10 points
- Maximum possible score: 100 points
- Score tracking variable: `int x`

3. **Input Handling**
- Name input: Character array (50 characters max)
- Answer input: Single character
- Play again option: String input

## 📋 Questions List

1. **The Holy Land**
   - Question: What is called as 'THE HOLY LAND'?
   - Options: 
     * a. Makkah
     * b. Mathura
     * c. Mecca
   - Correct Answer: a

2. **Roof of the World**
   - Question: What is called as 'THE ROOF OF THE WORLD'?
   - Options:
     * a. Nepal
     * b. Rome
     * c. Tibet
   - Correct Answer: c

3. **Land of Rising Sun**
   - Question: What is called as 'THE LAND OF RISING SUN'?
   - Options:
     * a. Chicago
     * b. Japan
     * c. Tibet
   - Correct Answer: b

[... and so on for all 10 questions]

## 🎮 How to Play

1. **Starting the Game**
   - Run the executable
   - Enter your name
   - View welcome message

2. **Answering Questions**
   - Read each question carefully
   - Choose from options a, b, or c
   - Enter your choice
   - View immediate feedback

3. **Score System**
   - +10 points for each correct answer
   - No negative marking
   - Maximum score: 100 points

4. **Performance Ratings**
   ```
   100 points: "No cheating...... You have done this earlier also."
   90 points:  "You are extremely intelligent"
   80 points:  "You are intelligent"
   50-70 points: "You are average. Better luck next time"
   ≤40 points: "No use........ Not even 5 questions right"
   ```

## 💻 Technical Requirements

- Windows Operating System
- C++ Compiler
- Windows.h library support
- Console with color support

## 🚀 Compilation and Execution

1. **Compilation**
   ```bash
   g++ quiz_game.cpp -o quiz_game
   ```

2. **Execution**
   ```bash
   ./quiz_game
   ```

## ⚠️ Limitations

1. **Platform Dependency**
   - Windows-specific due to Windows.h
   - Color functionality limited to Windows console

2. **Input Constraints**
   - Name limited to 50 characters
   - Single character answers only
   - No input validation for answer choices

3. **Game Design**
   - Fixed question set
   - No randomization of questions
   - Limited answer options (only a, b, c)

## 🔄 Future Improvements

1. **Technical Enhancements**
   - Cross-platform compatibility
   - Input validation
   - Question randomization

2. **Feature Additions**
   - Multiple difficulty levels
   - Timer for each question
   - High score system
   - Question categories
   - Save game progress

3. **UI Improvements**
   - Better text formatting
   - ASCII art
   - Progress bar
   - Sound effects

## 🎯 Game Tips

1. **For Better Performance**
   - Read questions carefully
   - Don't rush your answers
   - Pay attention to feedback
   - Learn from incorrect answers

2. **Known Facts**
   - Questions focus on world geography
   - Current affairs questions may need updates
   - Some questions have similar themes

## ✍️ Author

Naila Shehzadi
- GitHub: [NailaShehzadi](https://github.com/Nailashehzadi01)
- Email: Nailashehzadi396@gmail.com

## 🤝 Contributing

1. Fork the project
2. Create your feature branch
3. Add your questions
4. Improve color schemes
5. Submit pull request

---
*Last Updated: March 2025*




