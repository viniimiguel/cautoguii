#pragma once
class Moc
{
public:
	std::pair <int, int> getposition();
	void moveTo(int x, int y, int duration);
	void click(int numofclicks, std::string button);
	void dragTo(int fx,int fy, int duration);
private:
};