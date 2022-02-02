typedef struct {
  byte x; 		// Hero x coordinate
  byte y; 		// Hero y coordinate
  byte dir;		// Hero direction
  int collided:1;	// Hero collided value
  byte lives;		// Hero score 1000-9999
  
} Hero;

typedef struct {
  byte x;		// Heart x coordinate
  byte y;		// Heart y coordinate

} Heart;

typedef struct {
  byte x;
  byte y;
  byte hp1;
  byte hp2;
  byte hp3;
  byte hp4;
  bool is_dead;
  byte dir;
  int id;
  bool is_alive;
  bool is_low;
  bool is_critical;
} Enemy;

struct Actor{
  char label[30]; // What kind of actor is it?
  byte x; // Current x-location
  byte y; // Current y-location
  sbyte dx; // Delta-x
  sbyte dy; // Delta-y
  bool is_alive; // Is the actor supposed to be 'alive' right now?
  byte lives; // How many lives does it have?
  byte dir;
};
//Prototypes;

void init_game(void);
void game_over(void);
void win_screen(void);
void start_game(void);
void clrscrn(void);
void title_screen(void);
void play(void);

void create_start_area(void); 
void create_top_left_area(void); //heart 0
void create_top_area(void); //heart 1
void create_top_right_area(void); //heart 2
void create_left_area(void); //heart 3
void create_right_area(void); //heart 5
void create_bottom_left_area(void); //heart 6
void create_bottom_area(void); //heart 7
void create_bottom_right_area(void); //heart 8
void create_boss_area(Enemy*);

void shoot(Enemy*);
void check_bullet_collision(void);
void check_enemy_collision(void);

void draw_left_border(void);
void draw_right_border(void);
void draw_bottom_border(void);
void draw_top_border(void);
void difficulty_screen(void);