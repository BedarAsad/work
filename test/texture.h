#include <SFML/Graphics.hpp>
#include <SFML/Audio.hpp>
#include <SFML/Window.hpp>
sf::Texture mainmenu;
sf::Texture startgame1;
sf::Texture startgame2;
sf::Texture spaceship1;
sf::Texture boss1;
sf::Texture bullet1;
bullet1.loadFromFile("bullet1.png");
sf::Sprite sprite_bullet1(bullet1);
sf::Texture bullet2;
bullet2.loadFromFile("bullet1.png");
sf::Sprite sprite_bullet2(bullet2);
sf::Texture bullet3;
bullet3.loadFromFile("bullet1.png");
sf::Sprite sprite_bullet3(bullet3);
sf::Texture bullet4;
bullet4.loadFromFile("bullet1.png");
sf::Sprite sprite_bullet4(bullet4);
sf::Texture bullet5;
bullet5.loadFromFile("bullet1.png");
sf::Sprite sprite_bullet5(bullet5);
sf::Texture bullet6;
bullet6.loadFromFile("bullet1.png");
sf::Sprite sprite_bullet6(bullet6);
sf::Texture bullet7;
bullet7.loadFromFile("bullet1.png");
sf::Sprite sprite_bullet7(bullet7);
sf::Texture bullet8;
bullet8.loadFromFile("bullet1.png");
sf::Sprite sprite_bullet8(bullet8);

sf::Texture bullet9;
bullet9.loadFromFile("bullet1.png");
sf::Sprite sprite_bullet9(bullet9);

sf::Texture bullet10;
bullet10.loadFromFile("bullet1.png");
sf::Sprite sprite_bullet10(bullet10);
sf::Texture enemybullet1;
sf::Texture enemybullet2;
sf::Texture enemybullet3;
sf::Texture enemybullet4;
sf::Texture enemybullet5;

sf::Texture spaceship1Effect;
spaceship1Effect.loadFromFile("spaceship1effect.png");
sf::Sprite sprite_spaceship1Effect(spaceship1Effect);

sf::Texture smallEnemy1;
sf::Texture smallEnemy2;
sf::Texture smallEnemy3;
sf::Texture smallEnemy4;
sf::Texture smallEnemy5;
sf::Texture smallEnemyBullet1;
sf::Texture smallEnemyBullet2;
sf::Texture smallEnemyBullet3;
sf::Texture smallEnemyBullet4;
sf::Texture smallEnemyBullet5;

sf::Texture ulkaPindo1;
sf::Texture ulkaPindo2;
sf::Texture ulkaPindo3;
sf::Texture ulkaPindo4;
sf::Texture ulkaPindo5;
sf::Texture ulkaPindo6;

smallEnemy1.loadFromFile("enemyship1.png");
smallEnemy2.loadFromFile("enemyship1.png");
smallEnemy3.loadFromFile("enemyship1.png");
smallEnemy4.loadFromFile("enemyship1.png");
smallEnemy5.loadFromFile("enemyship1.png");
sf::Sprite sprite_smallEnemy1(smallEnemy1);
sf::Sprite sprite_smallEnemy2(smallEnemy1);
sf::Sprite sprite_smallEnemy3(smallEnemy1);
sf::Sprite sprite_smallEnemy4(smallEnemy1);
sf::Sprite sprite_smallEnemy5(smallEnemy1);

mainmenu.loadFromFile("main_menu.png");
startgame1.loadFromFile("background1.jpeg");
startgame2.loadFromFile("background1.jpeg");
spaceship1.loadFromFile("spaceship1.png");
boss1.loadFromFile("boss1.png");

enemybullet1.loadFromFile("bullet2.png");
enemybullet2.loadFromFile("bullet2.png");
enemybullet3.loadFromFile("bullet2.png");
enemybullet4.loadFromFile("bullet2.png");
enemybullet5.loadFromFile("bullet2.png");

smallEnemyBullet1.loadFromFile("bullet3.png");
smallEnemyBullet2.loadFromFile("bullet3.png");
smallEnemyBullet3.loadFromFile("bullet3.png");
smallEnemyBullet4.loadFromFile("bullet3.png");
smallEnemyBullet5.loadFromFile("bullet3.png");
ulkaPindo1.loadFromFile("ulkapindo.png");
ulkaPindo2.loadFromFile("ulkapindo.png");
ulkaPindo3.loadFromFile("ulkapindo.png");
ulkaPindo4.loadFromFile("ulkapindo.png");
ulkaPindo5.loadFromFile("ulkapindo.png");
ulkaPindo6.loadFromFile("ulkapindo.png");
/*
sf::Music music;
music.openFromFile("back_sound.wav");
music.setVolume(100);
*/
sf::Sprite sprite_mainmenu(mainmenu);
sf::Sprite sprite_startgame1(startgame1);
sf::Sprite sprite_startgame2(startgame2);
sf::Sprite sprite_spaceship1(spaceship1);
sf::Sprite sprite_boss1(boss1);

sf::Sprite sprite_enemybullet1(enemybullet1);
sf::Sprite sprite_enemybullet2(enemybullet2);
sf::Sprite sprite_enemybullet3(enemybullet3);
sf::Sprite sprite_enemybullet4(enemybullet4);
sf::Sprite sprite_enemybullet5(enemybullet5);

sf::Sprite sprite_smallEnemyBullet1(smallEnemyBullet1);
sf::Sprite sprite_smallEnemyBullet2(smallEnemyBullet2);
sf::Sprite sprite_smallEnemyBullet3(smallEnemyBullet3);
sf::Sprite sprite_smallEnemyBullet4(smallEnemyBullet4);
sf::Sprite sprite_smallEnemyBullet5(smallEnemyBullet5);

sf::Texture smallEnemy2_1;
sf::Texture smallEnemy2_2;
sf::Texture smallEnemy2_3;
sf::Texture smallEnemy2_4;
sf::Texture smallEnemy2_5;

sf::Texture smallEnemy2Bullet1;
sf::Texture smallEnemy2Bullet2;
sf::Texture smallEnemy2Bullet3;
sf::Texture smallEnemy2Bullet4;
sf::Texture smallEnemy2Bullet5;

smallEnemy2_1.loadFromFile("enemyship2.png");
smallEnemy2_2.loadFromFile("enemyship2.png");
smallEnemy2_3.loadFromFile("enemyship2.png");
smallEnemy2_4.loadFromFile("enemyship2.png");
smallEnemy2_5.loadFromFile("enemyship2.png");

smallEnemy2Bullet1.loadFromFile("bullet4.jpg");
smallEnemy2Bullet2.loadFromFile("bullet4.jpg");
smallEnemy2Bullet3.loadFromFile("bullet4.jpg");
smallEnemy2Bullet4.loadFromFile("bullet4.jpg");
smallEnemy2Bullet5.loadFromFile("bullet4.jpg");

sf::Sprite sprite_smallEnemy2_1(smallEnemy2_1);
sf::Sprite sprite_smallEnemy2_2(smallEnemy2_2);
sf::Sprite sprite_smallEnemy2_3(smallEnemy2_3);
sf::Sprite sprite_smallEnemy2_4(smallEnemy2_4);
sf::Sprite sprite_smallEnemy2_5(smallEnemy2_5);

sf::Sprite sprite_smallEnemy2Bullet1(smallEnemy2Bullet1);
sf::Sprite sprite_smallEnemy2Bullet2(smallEnemy2Bullet2);
sf::Sprite sprite_smallEnemy2Bullet3(smallEnemy2Bullet3);
sf::Sprite sprite_smallEnemy2Bullet4(smallEnemy2Bullet4);
sf::Sprite sprite_smallEnemy2Bullet5(smallEnemy2Bullet5);

sf::Sprite sprite_ulkaPindo1(ulkaPindo1);
sf::Sprite sprite_ulkaPindo2(ulkaPindo2);
sf::Sprite sprite_ulkaPindo3(ulkaPindo3);
sf::Sprite sprite_ulkaPindo4(ulkaPindo4);
sf::Sprite sprite_ulkaPindo5(ulkaPindo5);
sf::Sprite sprite_ulkaPindo6(ulkaPindo6);
sf::Clock enemy1_clock;
sf::Time enemy1_time = sf::milliseconds(55000);
sf::Clock smallenemy1_clock;
sf::Clock ulkapindo_clock;
sf::Clock smallenemy2_clock;
sf::Time smallenemy1_time_stage1 = sf::milliseconds(8000);
sf::Time smallenemy1_time_stage2 = sf::milliseconds(17000);
sf::Time ulkapindo_time_stage1 = sf::milliseconds(8000);
sf::Time ulkapindo_time_stage2 = sf::milliseconds(30000); //60000
sf::Time smallenemy2_time_stage1 = sf::milliseconds(30000);
sf::Time smallenemy2_time_stage2 = sf::milliseconds(40000);



sf::Font font;
font.loadFromFile("Font/TIMES.ttf");

sf::Text life;
life.setFont(font);
life.setString("Life: ");
life.setFillColor(sf::Color::Red);
life.setPosition(sf::Vector2f(10, 3));
sf::Text mylevel;
mylevel.setFont(font);
std::stringstream ss;
ss << life1;
mylevel.setString(ss.str());
mylevel.setFillColor(sf::Color::Red);
mylevel.setPosition(sf::Vector2f(500, 3));