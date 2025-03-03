# 🎮 Zappy

A multiplayer game where artificial intelligences compete for resources on a virtual planet. This project consists of three main components: a server, a graphical interface, and AI clients.

## 🌟 Overview

Zappy is an immersive multiplayer game where artificial intelligence-controlled players compete in teams on a tile-based map. The goal is to collect resources, level up, and achieve victory through strategic gameplay and team coordination.

## 🚀 Components

### Server (`/server`)
- Core game logic implementation
- Manages game state and player interactions
- Handles resource distribution and game rules
- Network communication with clients and GUI

### Graphical Interface (`/gui`)
- Real-time visualization of the game world
- Displays players, resources, and game events
- Provides an intuitive interface to monitor game progress

### AI Client (`/ai`)
- Implements artificial intelligence for players
- Strategic decision-making algorithms
- Resource management and team coordination

## 🛠️ Building the Project

### Prerequisites
- C/C++ compiler
- Make build system
- Required development libraries (check individual component READMEs)

### Build Instructions

To build all components:
```bash
make
```

To build individual components:
```bash
make server  # Build only the server
make gui     # Build only the GUI
make ai      # Build only the AI client
```

### Cleaning up:
```bash
make clean   # Clean object files
make fclean  # Clean everything including binaries
make re      # Rebuild everything
```

## 🎯 Features

- Multi-team gameplay support
- Real-time resource management
- Dynamic game world with various resources
- Customizable map size and game parameters
- Advanced AI decision-making capabilities
- Real-time 3D visualization
- Network-based client-server architecture

## 🎮 Usage

1. Start the server:
```bash
./zappy_server [options]
```

2. Launch the GUI:
```bash
./zappy_gui [options]
```

3. Connect AI clients:
```bash
./zappy_ai [team_name]
```

## 🤝 Contributing

Feel free to fork this project, create a feature branch, and submit a Pull Request. For major changes, please open an issue first to discuss the proposed changes.

## 📝 License

This project is part of the EPITECH curriculum and follows its academic requirements and guidelines.

## 👥 Authors

- [Matéo Lechantre](https://github.com/Eldiste)
