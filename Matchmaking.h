#ifndef MATCHMAKING_H
#define MATCHMAKING_H

#include <vector>

class Player; // Forward declaration

class Matchmaking {
public:
    void addPlayer(Player* player);
    void startMatch();

private:
    std::vector<Player*> waitingPlayers; // Players waiting for a match
    int maxPlayersPerMatch = 100; // Example maximum players
};

#endif // MATCHMAKING_H