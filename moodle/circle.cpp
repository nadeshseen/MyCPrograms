#include <msoftcon.h> // for graphics functions
////////////////////////////////////////////////////////////////
struct circle //graphics circle
{
int xCo, yCo; //coordinates of center
int radius;
color fillcolor; //color
fstyle fillstyle; //fill pattern
};
////////////////////////////////////////////////////////////////
void circ_draw(circle c)
{
set_color(c.fillcolor); //set color
set_fill_style(c.fillstyle); //set fill pattern
draw_circle(c.xCo, c.yCo, c.radius); //draw solid circle
}
//--------------------------------------------------------------
int main()
{
init_graphics(); //initialize graphics system
//create circles
