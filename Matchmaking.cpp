#include "Matchmaking.h"
#include "Player.h"
#include <iostream>

void Matchmaking::addPlayer(Player* player) {
    waitingPlayers.push_back(player);
    std::cout << "Player added to matchmaking." << std::endl;

    // If enough players are waiting, start a match
    if (waitingPlayers.size() >= maxPlayersPerMatch) {
        startMatch();
    }
}

void Matchmaking::startMatch() {
    std::cout << "Starting a match with " << waitingPlayers.size() << " players." << std::endl;
    // Here you would implement more logic to start the match, reset player states, etc.
    waitingPlayers.clear(); // Clear the waiting room after starting the match
}