/*
 ********************************************************
 *  Filename:   AIPlayer.cpp
 ********************************************************
 *  Created on: Nov 5, 2008
 *      Author: marc
 ********************************************************
 */

#include "AIPlayer.h"

/* Initializes the player with color and name */
AIPlayer::AIPlayer(int color, string name) {
	m_color = color;
	m_name = name;

}

AIPlayer::~AIPlayer() {
	// TODO Auto-generated destructor stub
}

/* Requests the best move from the Heuristic and makes the move */
void AIPlayer::makeNextMove(board* b){
	Heuristic* h = new Heuristic();
	b->calculatePossibleMoves(m_color);					// Moves have to be calculated before moving
	b->movePiece(h->bestMove(b, m_color), m_color);		// TRY
}