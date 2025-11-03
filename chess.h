class Bishop; 
class Rook; 
class Queen; 
class Knight; 


class Knight
{

public:

  Knight (int new_x, int new_y);

  void setX (int new_x);
  void setY (int new_y);

  void move (int new_x, int new_y, Knight knight, Bishop bishop, Rook rook, Queen queen);

  int getX () const;
  int getY () const;


private:
  int x;
  int y;
};

class Bishop
{
public:

  Bishop (int new_x, int new_y);

  void setX (int new_x);
  void setY (int new_y);

  void move (int new_x, int new_y, Bishop bishop, Knight knight, Rook rook, Queen queen);

  int getX () const;
  int getY () const;

private:
  int x, y;

};


class Rook
{
public:

  Rook (int new_x, int new_y);

  void setX (int new_x);
  void setY (int new_y);

  void move (int new_x, int new_y, Rook rook, Bishop bishop, Knight knight, Queen queen);

  int getX () const;
  int getY () const;

private:
  int x, y;

};


class Queen
{
public:
  Queen (int new_x, int new_y);

  void setX (int new_x);

  void setY (int new_y);

  void move (int new_x, int new_y, Queen queen, Rook rook, Bishop bishop, Knight knight);

  int getX () const;
  int getY () const;


private:
  int x, y;
};



class Chess
{
public:
  void map (Knight knight, Bishop bishop, Rook rook, Queen queen);

  void help ();

private:
};

