#include "Action.h"
#include "Character.h"
CAction::CAction()
{
	m_character = 0;
}

void CAction::SetCharacter(Character* p)
{
	m_character = p;
}
void CAction::SetEnemy(CEnemy* p)
{
	m_enemy = p;
}

CAction::~CAction()
{
}
