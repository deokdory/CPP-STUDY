#pragma once

void Casting();

class Character
{
public:
	virtual void Attack() const;
};

class Player : public Character
{
public:
	Player(int xp = 0) : XP(xp) {}

	void Heal();

	int GetXP() const { return XP; }
	void SetXP(int xp) { XP = xp; }

private:
	int XP;
};

class Enemy : public Character
{
public:
	void Move();
};