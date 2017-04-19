//
// Game.cpp for cpp in /home/annibal/cpp/cp_2/anniba_c
// 
// Made by ANNIBAL Celine
// Login   <anniba_c@etna-alternance.net>
// 
// Started on  Wed Feb 15 12:25:05 2017 ANNIBAL Celine
// Last update Thu Feb 16 15:53:34 2017 ANNIBAL Celine
//
#include "Game.hh"

Game *Game::m_instance = nullptr;

Game::Game()
{
  std::cout << "\033c" << std::endl;
  std::cout << "\n\n------------------ METAL GEAR PAPER ------------------\n\n" << std::endl;
  std::cout << "Utiliser les touches wsqd pour avancer, et la touche 'q' pour quitter\n" << std::endl;
  std::cout << "Bienvenue dans nore jeu MGP ! \nVotre mission : Trouver la sortie du labyrinth! \nAttention, veillez à éviter les gardes representés par des G, ainsi que leur champ de vision ':' au risque de mourir immédiatement! \nVous devez passer sur le coffre 'k' pour recupérer une clé afin d'ouvrir la porte 'A' et pouvoir accéder à la sortie. \nMais ne nous fiez pas aux apprences certains murs peuvent cacher des passages secrets.. \n" << std::endl;
  std::cout << "C'est parti !\n" << std::endl;
  std::cout << "Entrez 'c' pour commencer ou 'q' pour quitter !" << std::endl;
}

Game::~Game()
{
}

Game* Game::GetGame()
{
  if(! m_instance)
    m_instance = new Game();
  return(m_instance);
}

void Game::LoadMap()
{
  Player P = Player(1);
  ReadMap myMap("lvl1.map");
  myMap.GetPlayerPos(P.x,P.y);
  myMap.SetGuardMarks();
  myMap.ShowMap();
  MoveChar(&myMap, &P);
}

void Game::MoveChar(ReadMap *myMap, Player *P)
{
  char dir;
  std::string answer;
  std::map<char, Player::POSX> tab;
  tab['w'] = Player::POSX::W;
  tab['d'] = Player::POSX::D;
  tab['a'] = Player::POSX::A;
  tab['s'] = Player::POSX::S;

  while(P->IsAlive && dir != 'q' && !P->Escape)
    {
      std::cin >> dir;
      if(tab.find(dir) != tab.end())
	{
	  P->move(1,tab[dir],myMap);
	  myMap->ShowMap();
	}
      else if(dir == 'q')
	std::cout << "A bientot !" << std::endl;
      else
	std::cout << "Mauvaise letter" << std::endl;
    }
  
  if(P->IsAlive == false)
    {
      std::cout << "Boohh tu es mooort ! Rejouer ? Tapez 'oui' ou 'non' " << std::endl;
      std::cin >> answer;
      if (answer == "oui")
	{
	  P->IsAlive = true;
	  LoadMap();
	}	
    }
  else if(P->Escape)
    std::cout << "Youpi tu as gagné(e) !" << std::endl;
}

int main(void)
{
  char begin;
  Game *butterfly=Game::GetGame();
  std::cin >> begin;
  while(begin != 'c' && begin != 'q')
    {
      std::cout << "Veillez entrer 'c' ou 'q'" << std::endl;
      std::cin >> begin;
    }
  if(begin == 'c')
    butterfly->LoadMap();
  else if(begin == 'q')
    std::cout << "A bientôt" << std::endl;
  return 0;
}
