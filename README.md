Still in Demo mode

🏰 Peasant Simulator in Warcraft III

A fun little C++ text-based simulator where you play as a peasant in the Warcraft universe.
Your goal: build a Town Hall by guessing numbers, gathering resources, and securing kingdom permits.

🎮 Gameplay:

Step 1: Guess the secret number (1–10) to unlock your Town Hall.
Step 2: Gather enough resources (requires 385 gold and 205 lumber).
Step 3: Request a land permit from your chosen kingdom.
Step 4: Measure your land in meters, and the game will calculate acres.

Replay as much as you want and try different kingdoms!

📂 Project Structure
Peasant-Simulator-in-Warcraft-3/
│
├── main.cpp        # Game entry point
├── resources.cpp   # Handles resource gathering logic
├── kingdom.cpp     # Handles kingdom land permits
├── utils.cpp       # Shared helper functions
│
├── resources.h
├── kingdom.h
├── utils.h
│
├── Makefile        # Build system
└── README.md       # Project info

⚙️ Build & Run:
Linux / macOS
make       # build the game
./game     # run it
make clean # remove build files

Windows (MinGW or WSL recommended):
mingw32-make     # build
game.exe         # run
mingw32-make clean

✨ Features:
+Input validation (no crashes if you type letters instead of numbers).
+Rounding system for land calculation (acres rounded to 2 decimals).
+Replay loop (play as many times as you want).
+Modular code structure with headers & separate source files.

🚀 Future Ideas (Hopefully):
+Add more building types (Barracks, Farms, Blacksmith, etc).
+Add difficulty levels (different resource requirements).
+Introduce random events (plagues, invasions, taxes).
+Save progress between runs.

🛠️ Requirements:
C++17 or newer
g++ or clang (Linux/macOS)
MinGW or MSVC (Windows)
