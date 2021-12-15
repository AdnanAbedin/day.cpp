void day() {
	glClearColor(1.0f, 1.0f, 1.0f, 1.0f);
    glClear(GL_COLOR_BUFFER_BIT);




//Sky
glBegin(GL_QUADS);
        glColor3ub(240, 250, 250);
        glVertex2f(1.0,1.0);
        glVertex2f(-1.0,1.0);
        glVertex2f(-1.0,-0.6);
        glVertex2f(1.0,-0.6);
        glEnd();
//sun



  glPushMatrix();
glTranslatef(position1-1,position1,0);
	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(249, 248, 154);
	   int is;
	   float xs=0.77;
	   float ys=0.77;
		glVertex2f(xs, ys);
		for(is = 0; is <= 100;is++) {
			glVertex2f(
		            xs + (0.2 * cos(is *  2.0f*PI/ 100)),
			    ys + (0.2 * sin(is * 2.0f*PI / 100))
			);
		}
	glEnd();
glPopMatrix();

//clouds1
glPushMatrix();
glTranslatef(position2,0,0);
	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(255,255,255);
	   int ic1;
	   float xc1=0.75;
	   float yc1=0.7;
		glVertex2f(xc1, yc1);
		for(ic1 = 0; ic1 <= 100;ic1++) {
			glVertex2f(
		            xc1 + (0.15 * cos(ic1 *  2.0f*PI/ 100)),
			    yc1 + (0.15 * sin(ic1 * 2.0f*PI / 100))
			);
		}
	glEnd();
	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(255,255,255);

	   float xc2=0.9;
	   float yc2=0.68;
		glVertex2f(xc2, yc2);
		for(ic1 = 0; ic1 <= 100;ic1++) {
			glVertex2f(
		            xc2 + (0.1 * cos(ic1 *  2.0f*PI/ 100)),
			    yc2 + (0.1 * sin(ic1 * 2.0f*PI / 100))
			);
		}
	glEnd();
glPopMatrix();

//clouds2
glPushMatrix();
glTranslatef(position2,0,0);
	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(255,255,255);
	   int ic2;
	   float xc3=0.45;
	   float yc3=0.4;
		glVertex2f(xc3, yc3);
		for(ic2 = 0; ic2 <= 100;ic2++) {
			glVertex2f(
		            xc3 + (0.15 * cos(ic2 *  2.0f*PI/ 100)),
			    yc3 + (0.15 * sin(ic2 * 2.0f*PI / 100))
			);
		}
	glEnd();
	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(255,255,255);

	   float xc4=0.6;
	   float yc4=0.38;
		glVertex2f(xc4, yc4);
		for(ic1 = 0; ic1 <= 100;ic1++) {
			glVertex2f(
		            xc4 + (0.1 * cos(ic1 *  2.0f*PI/ 100)),
			    yc4 + (0.1 * sin(ic1 * 2.0f*PI / 100))
			);
		}
	glEnd();
glPopMatrix();
//clouds2
glPushMatrix();
glTranslatef(position2,0,0);
	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(255,255,255);
	   int ic3;
	   float xc5=0.05;
	   float yc5=0.7;
		glVertex2f(xc5, yc5);
		for(ic3 = 0; ic3 <= 100;ic3++) {
			glVertex2f(
		            xc5 + (0.15 * cos(ic3 *  2.0f*PI/ 100)),
			    yc5 + (0.15 * sin(ic3 * 2.0f*PI / 100))
			);
		}
	glEnd();
	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(255,255,255);

	   float xc6=0.2;
	   float yc6=0.7;
		glVertex2f(xc5, yc5);
		for(ic1 = 0; ic1 <= 100;ic1++) {
			glVertex2f(
		            xc6 + (0.1 * cos(ic1 *  2.0f*PI/ 100)),
			    yc6 + (0.1 * sin(ic1 * 2.0f*PI / 100))
			);
		}
	glEnd();
glPopMatrix();
//Background 1
glBegin(GL_QUADS);//Left_Building1
        glColor3ub(45, 90, 143);
        glVertex2f(-0.9,0.6);
        glVertex2f(-1.0,0.7);
        glVertex2f(-1.0,-0.6);
        glVertex2f(-0.9,-0.6);
        glEnd();
glBegin(GL_POLYGON);//Left_Building2
        glColor3ub(45, 90, 143);
        glVertex2f(-0.7,0.78);
        glVertex2f(-0.75,0.85);
        glVertex2f(-0.88,0.78);
        glVertex2f(-0.88,-0.6);
        glVertex2f(-0.7,-0.6);
        glEnd();
glBegin(GL_LINES);
        glColor3ub(176, 176, 176);
        glVertex2f(-0.75,0.85);
        glVertex2f(-0.75,-0.6);
        glEnd();

glBegin(GL_POLYGON);//Left_Building3
        glColor3ub(45, 90, 143);
        glVertex2f(-0.4,0.47);
        glVertex2f(-0.4,0.78);
        glVertex2f(-0.5,0.85);
        glVertex2f(-0.6,0.78);
        glVertex2f(-0.6,0.47);
        glVertex2f(-0.69,0.4);
        glVertex2f(-0.69,-0.6);
        glVertex2f(-0.3,-0.6);
        glVertex2f(-0.3,0.4);

        glEnd();
glBegin(GL_LINES);
        glColor3ub(176, 176, 176);
        glVertex2f(-0.5,0.85);
        glVertex2f(-0.5,-0.6);
        glEnd();
//background 2
glBegin(GL_POLYGON);//Right_Building1
        glColor3ub(149, 187, 187);
        glVertex2f(-0.1,0.53);
        glVertex2f(-0.23,0.58);
        glVertex2f(-0.35,0.53);
        glVertex2f(-0.35,-0.6);
        glVertex2f(-0.1,-0.6);
        glEnd();
glBegin(GL_LINES);
        glColor3ub(145, 161, 161);
        glVertex2f(-0.23,0.58);
        glVertex2f(-0.23,-0.6);
        glEnd();

glBegin(GL_POLYGON);//Right_Building2
        glColor3ub(149, 187, 187);
        glVertex2f(-0.39,0.41);
        glVertex2f(-0.45,0.46);
        glVertex2f(-0.65,0.41);
        glVertex2f(-0.65,-0.6);
        glVertex2f(-0.39,-0.6);
        glEnd();
glBegin(GL_LINES);
        glColor3ub(145, 161, 161);
        glVertex2f(-0.45,0.46);
        glVertex2f(-0.45,-0.6);
        glEnd();
glBegin(GL_POLYGON);//Right_Building3
        glColor3ub(149, 187, 187);
        glVertex2f(-0.67,0.45);
        glVertex2f(-0.8,0.5);
        glVertex2f(-1.0,0.45);
        glVertex2f(-1.0,-0.6);
        glVertex2f(-0.67,-0.6);
        glEnd();
glBegin(GL_LINES);
        glColor3ub(145, 161, 161);
        glVertex2f(-0.8,0.5);
        glVertex2f(-0.8,-0.6);
        glEnd();
//footpath
glBegin(GL_QUADS);
        glColor3ub(201, 201, 201);
        glVertex2f(1.0,-0.6);
        glVertex2f(-1.0,-0.6);
        glVertex2f(-1.0,-0.8);
        glVertex2f(1.0,-0.8);
        glEnd();

//Building row 2
glTranslatef(-1.15,0.1,0);
glBegin(GL_POLYGON);//Left Building4
        glColor3ub(213, 182, 149);
        glVertex2f(0.4,0.1);
        glVertex2f(0.15,0.1);
        glVertex2f(0.1,0.07);
        glVertex2f(0.1,-0.67);
        glVertex2f(0.15,-0.7);
        glVertex2f(0.4,-0.7);
        glEnd();
glBegin(GL_LINES);
        glColor3ub(19, 124, 85);
        glVertex2f(0.15,0.1);
        glVertex2f(0.15,-0.7);
        glEnd();
glBegin(GL_QUADS);
        glColor3ub(154, 224, 222);
        glVertex2f(0.37,0.08);
        glVertex2f(0.18,0.08);
        glVertex2f(0.18,-0.02);
        glVertex2f(0.37,-0.02);
        glEnd();
glTranslatef(0.0f, -0.13f, 0.0f);
glBegin(GL_QUADS);
       glColor3ub(154, 224, 222);
        glVertex2f(0.37,0.08);
        glVertex2f(0.18,0.08);
        glVertex2f(0.18,-0.02);
        glVertex2f(0.37,-0.02);
        glEnd();
glTranslatef(0.0f, -0.13f, 0.0f);
glBegin(GL_QUADS);
       glColor3ub(154, 224, 222);
        glVertex2f(0.37,0.08);
        glVertex2f(0.18,0.08);
        glVertex2f(0.18,-0.02);
        glVertex2f(0.37,-0.02);
        glEnd();
glTranslatef(0.0f, -0.13f, 0.0f);
glBegin(GL_QUADS);
       glColor3ub(154, 224, 222);
        glVertex2f(0.37,0.08);
        glVertex2f(0.18,0.08);
        glVertex2f(0.18,-0.02);
        glVertex2f(0.37,-0.02);
        glEnd();
glTranslatef(0.0f, -0.13f, 0.0f);
glBegin(GL_QUADS);
       glColor3ub(154, 224, 222);
        glVertex2f(0.37,0.08);
        glVertex2f(0.18,0.08);
        glVertex2f(0.18,-0.02);
        glVertex2f(0.37,-0.02);
        glEnd();
glLoadIdentity();
glLoadIdentity();
glLoadIdentity();
glLoadIdentity();
glLoadIdentity();


glTranslatef(-0.53,0.1,0.0);
glBegin(GL_POLYGON);//Left Building3
        glColor3ub(239, 200, 31);
        glVertex2f(0.1,0.1);
        glVertex2f(-0.25,0.1);
        glVertex2f(-0.3,0.07);
        glVertex2f(-0.3,-0.67);
        glVertex2f(-0.25,-0.7);
        glVertex2f(0.1,-0.7);
        glEnd();
glBegin(GL_LINES);
        glColor3ub(170, 140, 9);
        glVertex2f(-0.25,0.1);
        glVertex2f(-0.25,-0.7);
        glEnd();

glBegin(GL_QUADS);
        glColor3ub(154, 224, 222);
        glVertex2f(0.08,0.08);
        glVertex2f(-0.23,0.08);
        glVertex2f(-0.23,-0.02);
        glVertex2f(0.08,-0.02);
        glEnd();
glTranslatef(0.0f, -0.13f, 0.0f);
glBegin(GL_QUADS);
        glColor3ub(154, 224, 222);
        glVertex2f(0.08,0.08);
        glVertex2f(-0.23,0.08);
        glVertex2f(-0.23,-0.02);
        glVertex2f(0.08,-0.02);
        glEnd();
glTranslatef(0.0f, -0.13f, 0.0f);
glBegin(GL_QUADS);
        glColor3ub(154, 224, 222);
        glVertex2f(0.08,0.08);
        glVertex2f(-0.23,0.08);
        glVertex2f(-0.23,-0.02);
        glVertex2f(0.08,-0.02);
        glEnd();
glTranslatef(0.0f, -0.13f, 0.0f);
glBegin(GL_QUADS);
        glColor3ub(154, 224, 222);
        glVertex2f(0.08,0.08);
        glVertex2f(-0.23,0.08);
        glVertex2f(-0.23,-0.02);
        glVertex2f(0.08,-0.02);
        glEnd();
glTranslatef(0.0f, -0.13f, 0.0f);
glBegin(GL_QUADS);
        glColor3ub(154, 224, 222);
        glVertex2f(0.08,0.08);
        glVertex2f(-0.23,0.08);
        glVertex2f(-0.23,-0.02);
        glVertex2f(0.08,-0.02);
        glEnd();
glLoadIdentity();
glLoadIdentity();
glLoadIdentity();
glLoadIdentity();
glLoadIdentity();

glTranslatef(-0.5,0.3,0);
glBegin(GL_POLYGON);//Left Building4
        glColor3ub(50, 154, 115);
        glVertex2f(0.4,0.1);
        glVertex2f(0.15,0.1);
        glVertex2f(0.1,0.07);
        glVertex2f(0.1,-0.67);
        glVertex2f(0.15,-0.7);
        glVertex2f(0.4,-0.7);
        glEnd();
glBegin(GL_LINES);
        glColor3ub(19, 124, 85);
        glVertex2f(0.15,0.1);
        glVertex2f(0.15,-0.7);
        glEnd();
glBegin(GL_QUADS);
        glColor3ub(154, 224, 222);
        glVertex2f(0.37,0.08);
        glVertex2f(0.18,0.08);
        glVertex2f(0.18,-0.02);
        glVertex2f(0.37,-0.02);
        glEnd();
glTranslatef(0.0f, -0.13f, 0.0f);
glBegin(GL_QUADS);
       glColor3ub(154, 224, 222);
        glVertex2f(0.37,0.08);
        glVertex2f(0.18,0.08);
        glVertex2f(0.18,-0.02);
        glVertex2f(0.37,-0.02);
        glEnd();
glTranslatef(0.0f, -0.13f, 0.0f);
glBegin(GL_QUADS);
       glColor3ub(154, 224, 222);
        glVertex2f(0.37,0.08);
        glVertex2f(0.18,0.08);
        glVertex2f(0.18,-0.02);
        glVertex2f(0.37,-0.02);
        glEnd();
glTranslatef(0.0f, -0.13f, 0.0f);
glBegin(GL_QUADS);
       glColor3ub(154, 224, 222);
        glVertex2f(0.37,0.08);
        glVertex2f(0.18,0.08);
        glVertex2f(0.18,-0.02);
        glVertex2f(0.37,-0.02);
        glEnd();
glTranslatef(0.0f, -0.13f, 0.0f);
glBegin(GL_QUADS);
       glColor3ub(154, 224, 222);
        glVertex2f(0.37,0.08);
        glVertex2f(0.18,0.08);
        glVertex2f(0.18,-0.02);
        glVertex2f(0.37,-0.02);
        glEnd();
glLoadIdentity();
glLoadIdentity();
glLoadIdentity();
glLoadIdentity();
glLoadIdentity();

glTranslatef(0.25,0.25,0.0);
glBegin(GL_POLYGON);//Left Building3
        glColor3ub(109, 135, 156);
        glVertex2f(0.1,0.1);
        glVertex2f(-0.25,0.1);
        glVertex2f(-0.3,0.07);
        glVertex2f(-0.3,-0.67);
        glVertex2f(-0.25,-0.7);
        glVertex2f(0.1,-0.7);
        glEnd();
glBegin(GL_LINES);
        glColor3ub(54, 67, 78);
        glVertex2f(-0.25,0.1);
        glVertex2f(-0.25,-0.7);
        glEnd();

glBegin(GL_QUADS);
        glColor3ub(154, 224, 222);
        glVertex2f(0.08,0.08);
        glVertex2f(-0.23,0.08);
        glVertex2f(-0.23,-0.02);
        glVertex2f(0.08,-0.02);
        glEnd();
glTranslatef(0.0f, -0.13f, 0.0f);
glBegin(GL_QUADS);
        glColor3ub(154, 224, 222);
        glVertex2f(0.08,0.08);
        glVertex2f(-0.23,0.08);
        glVertex2f(-0.23,-0.02);
        glVertex2f(0.08,-0.02);
        glEnd();
glTranslatef(0.0f, -0.13f, 0.0f);
glBegin(GL_QUADS);
        glColor3ub(154, 224, 222);
        glVertex2f(0.08,0.08);
        glVertex2f(-0.23,0.08);
        glVertex2f(-0.23,-0.02);
        glVertex2f(0.08,-0.02);
        glEnd();
glTranslatef(0.0f, -0.13f, 0.0f);
glBegin(GL_QUADS);
        glColor3ub(154, 224, 222);
        glVertex2f(0.08,0.08);
        glVertex2f(-0.23,0.08);
        glVertex2f(-0.23,-0.02);
        glVertex2f(0.08,-0.02);
        glEnd();
glTranslatef(0.0f, -0.13f, 0.0f);
glBegin(GL_QUADS);
        glColor3ub(154, 224, 222);
        glVertex2f(0.08,0.08);
        glVertex2f(-0.23,0.08);
        glVertex2f(-0.23,-0.02);
        glVertex2f(0.08,-0.02);
        glEnd();
glLoadIdentity();
glLoadIdentity();
glLoadIdentity();
glLoadIdentity();
glLoadIdentity();

//trees
glLineWidth(4);
glBegin(GL_LINES);
        glColor3ub(78, 19, 22);
        glVertex2f(0.8,-0.4);
        glVertex2f(0.8,-0.65);
        glEnd();
glBegin(GL_TRIANGLE_FAN);
	glColor3ub(78, 181, 54);
        int it;
	   float xt=0.78;
	   float yt=-0.5;
		glVertex2f(xt, yt);
		for(it = 0; it<= 100;it++) {
			glVertex2f(
		            xt + (0.05 * cos(it *  2.0f*PI/ 100)),
			    yt + (0.05 * sin(it * 2.0f*PI / 100))
			);
		}
	glEnd();
glBegin(GL_TRIANGLE_FAN);
	glColor3ub(78, 181, 54);

	   float xt1=0.8;
	   float yt1=-0.45;
		glVertex2f(xt1, yt1);
		for(it = 0; it<= 100;it++) {
			glVertex2f(
		            xt1 + (0.06 * cos(it *  2.0f*PI/ 100)),
			    yt1 + (0.06 * sin(it * 2.0f*PI / 100))
			);
		}
	glEnd();
glBegin(GL_TRIANGLE_FAN);
	glColor3ub(78, 181, 54);

	   float xt2=0.82;
	   float yt2=-0.5;
		glVertex2f(xt1, yt1);
		for(it = 0; it<= 100;it++) {
			glVertex2f(
		            xt2 + (0.06 * cos(it *  2.0f*PI/ 100)),
			    yt2 + (0.06 * sin(it * 2.0f*PI / 100))
			);
		}
	glEnd();

glTranslatef(0.15,0,0);
glLineWidth(4);
glBegin(GL_LINES);
        glColor3ub(78, 19, 22);
        glVertex2f(0.8,-0.4);
        glVertex2f(0.8,-0.65);
        glEnd();
glBegin(GL_TRIANGLE_FAN);
	glColor3ub(78, 181, 54);

	    xt=0.78;
	    yt=-0.5;
		glVertex2f(xt, yt);
		for(it = 0; it<= 100;it++) {
			glVertex2f(
		            xt + (0.05 * cos(it *  2.0f*PI/ 100)),
			    yt + (0.05 * sin(it * 2.0f*PI / 100))
			);
		}
	glEnd();
glBegin(GL_TRIANGLE_FAN);
	glColor3ub(78, 181, 54);

	    xt1=0.8;
	    yt1=-0.45;
		glVertex2f(xt1, yt1);
		for(it = 0; it<= 100;it++) {
			glVertex2f(
		            xt1 + (0.06 * cos(it *  2.0f*PI/ 100)),
			    yt1 + (0.06 * sin(it * 2.0f*PI / 100))
			);
		}
	glEnd();
glBegin(GL_TRIANGLE_FAN);
	glColor3ub(78, 181, 54);

	    xt2=0.82;
	    yt2=-0.5;
		glVertex2f(xt1, yt1);
		for(it = 0; it<= 100;it++) {
			glVertex2f(
		            xt2 + (0.06 * cos(it *  2.0f*PI/ 100)),
			    yt2 + (0.06 * sin(it * 2.0f*PI / 100))
			);
		}
	glEnd();
glLoadIdentity();

glTranslatef(-0.15,0,0);
glLineWidth(4);
glBegin(GL_LINES);
        glColor3ub(78, 19, 22);
        glVertex2f(0.8,-0.4);
        glVertex2f(0.8,-0.65);
        glEnd();
glBegin(GL_TRIANGLE_FAN);
	glColor3ub(78, 181, 54);

	    xt=0.78;
	    yt=-0.5;
		glVertex2f(xt, yt);
		for(it = 0; it<= 100;it++) {
			glVertex2f(
		            xt + (0.05 * cos(it *  2.0f*PI/ 100)),
			    yt + (0.05 * sin(it * 2.0f*PI / 100))
			);
		}
	glEnd();
glBegin(GL_TRIANGLE_FAN);
	glColor3ub(78, 181, 54);

	    xt1=0.8;
	    yt1=-0.45;
		glVertex2f(xt1, yt1);
		for(it = 0; it<= 100;it++) {
			glVertex2f(
		            xt1 + (0.06 * cos(it *  2.0f*PI/ 100)),
			    yt1 + (0.06 * sin(it * 2.0f*PI / 100))
			);
		}
	glEnd();
glBegin(GL_TRIANGLE_FAN);
	glColor3ub(78, 181, 54);

	    xt2=0.82;
	    yt2=-0.5;
		glVertex2f(xt1, yt1);
		for(it = 0; it<= 100;it++) {
			glVertex2f(
		            xt2 + (0.06 * cos(it *  2.0f*PI/ 100)),
			    yt2 + (0.06 * sin(it * 2.0f*PI / 100))
			);
		}
	glEnd();
glTranslatef(-0.15,0,0);
glLineWidth(4);
glBegin(GL_LINES);
        glColor3ub(78, 19, 22);
        glVertex2f(0.8,-0.4);
        glVertex2f(0.8,-0.65);
        glEnd();
glBegin(GL_TRIANGLE_FAN);
	glColor3ub(78, 181, 54);

	    xt=0.78;
	    yt=-0.5;
		glVertex2f(xt, yt);
		for(it = 0; it<= 100;it++) {
			glVertex2f(
		            xt + (0.05 * cos(it *  2.0f*PI/ 100)),
			    yt + (0.05 * sin(it * 2.0f*PI / 100))
			);
		}
	glEnd();
glBegin(GL_TRIANGLE_FAN);
	glColor3ub(78, 181, 54);

	    xt1=0.8;
	    yt1=-0.45;
		glVertex2f(xt1, yt1);
		for(it = 0; it<= 100;it++) {
			glVertex2f(
		            xt1 + (0.06 * cos(it *  2.0f*PI/ 100)),
			    yt1 + (0.06 * sin(it * 2.0f*PI / 100))
			);
		}
	glEnd();
glBegin(GL_TRIANGLE_FAN);
	glColor3ub(78, 181, 54);

	    xt2=0.82;
	    yt2=-0.5;
		glVertex2f(xt1, yt1);
		for(it = 0; it<= 100;it++) {
			glVertex2f(
		            xt2 + (0.06 * cos(it *  2.0f*PI/ 100)),
			    yt2 + (0.06 * sin(it * 2.0f*PI / 100))
			);
		}
	glEnd();
glLoadIdentity();
glLoadIdentity();

glLineWidth(1);
//front buildings
glBegin(GL_POLYGON);//Left Building1
        glColor3ub(184, 46, 46);
        glVertex2f(-0.6,-0.1);
        glVertex2f(-0.8,-0.1);
        glVertex2f(-0.85,-0.13);
        glVertex2f(-0.85,-0.67);
        glVertex2f(-0.8,-0.7);
        glVertex2f(-0.6,-0.7);
        glEnd();
glBegin(GL_LINES);
        glColor3ub(78, 19, 22);
        glVertex2f(-0.8,-0.1);
        glVertex2f(-0.8,-0.7);
        glEnd();
glBegin(GL_QUADS);
        glColor3ub(154, 224, 222);
        glVertex2f(-0.62,-0.15);
        glVertex2f(-0.68,-0.15);
        glVertex2f(-0.68,-0.25);
        glVertex2f(-0.62,-0.25);
        glEnd();
glTranslatef(-0.1f, 0.0f, 0.0f);
glBegin(GL_QUADS);
        glColor3ub(154, 224, 222);
        glVertex2f(-0.62,-0.15);
        glVertex2f(-0.68,-0.15);
        glVertex2f(-0.68,-0.25);
        glVertex2f(-0.62,-0.25);
        glEnd();
glTranslatef(0.0f, -0.15f, 0.0f);
glBegin(GL_QUADS);
        glColor3ub(154, 224, 222);
        glVertex2f(-0.62,-0.15);
        glVertex2f(-0.68,-0.15);
        glVertex2f(-0.68,-0.25);
        glVertex2f(-0.62,-0.25);
        glEnd();
glTranslatef(0.1f, 0.0f, 0.0f);
glBegin(GL_QUADS);
        glColor3ub(154, 224, 222);
        glVertex2f(-0.62,-0.15);
        glVertex2f(-0.68,-0.15);
        glVertex2f(-0.68,-0.25);
        glVertex2f(-0.62,-0.25);
        glEnd();
glTranslatef(-0.1f, -0.15f, 0.0f);
glBegin(GL_QUADS);
        glColor3ub(154, 224, 222);
        glVertex2f(-0.62,-0.15);
        glVertex2f(-0.68,-0.15);
        glVertex2f(-0.68,-0.25);
        glVertex2f(-0.62,-0.25);
        glEnd();
glTranslatef(0.1f, 0.0f, 0.0f);
glBegin(GL_QUADS);
        glColor3ub(154, 224, 222);
        glVertex2f(-0.62,-0.15);
        glVertex2f(-0.68,-0.15);
        glVertex2f(-0.68,-0.25);
        glVertex2f(-0.62,-0.25);
        glEnd();
glLoadIdentity();
glLoadIdentity();
glLoadIdentity();
glLoadIdentity();
glLoadIdentity();
glBegin(GL_QUADS);
        glColor3ub(154, 224, 222);
        glVertex2f(-0.62,-0.6);
        glVertex2f(-0.78,-0.6);
        glVertex2f(-0.78,-0.7);
        glVertex2f(-0.62,-0.7);
        glEnd();


glBegin(GL_POLYGON);//Left Building2
        glColor3ub(198, 123, 123);
        glVertex2f(-0.3,-0.25);
        glVertex2f(-0.55,-0.25);
        glVertex2f(-0.6,-0.27);
        glVertex2f(-0.6,-0.67);
        glVertex2f(-0.55,-0.7);
        glVertex2f(-0.3,-0.7);
        glEnd();
glBegin(GL_LINES);
        glColor3ub(174, 76, 81);
        glVertex2f(-0.55,-0.25);
        glVertex2f(-0.55,-0.7);
        glEnd();

glBegin(GL_QUADS);
        glColor3ub(154, 224, 222);
        glVertex2f(-0.32,-0.29);
        glVertex2f(-0.42,-0.29);
        glVertex2f(-0.42,-0.39);
        glVertex2f(-0.32,-0.39);
        glEnd();
glTranslatef(-0.11f, 0.0f, 0.0f);
glBegin(GL_QUADS);
        glColor3ub(154, 224, 222);
        glVertex2f(-0.32,-0.29);
        glVertex2f(-0.42,-0.29);
        glVertex2f(-0.42,-0.39);
        glVertex2f(-0.32,-0.39);
        glEnd();
glTranslatef(0.11f, -0.15f, 0.0f);
glBegin(GL_QUADS);
        glColor3ub(154, 224, 222);
        glVertex2f(-0.32,-0.27);
        glVertex2f(-0.42,-0.27);
        glVertex2f(-0.42,-0.37);
        glVertex2f(-0.32,-0.37);
        glEnd();
glTranslatef(-0.11f, 0.0f, 0.0f);
glBegin(GL_QUADS);
        glColor3ub(154, 224, 222);
        glVertex2f(-0.32,-0.27);
        glVertex2f(-0.42,-0.27);
        glVertex2f(-0.42,-0.37);
        glVertex2f(-0.32,-0.37);
        glEnd();
glLoadIdentity();
glLoadIdentity();
glLoadIdentity();

glBegin(GL_QUADS);
        glColor3ub(154, 224, 222);
        glVertex2f(-0.33,-0.58);
        glVertex2f(-0.52,-0.58);
        glVertex2f(-0.52,-0.7);
        glVertex2f(-0.33,-0.7);
        glEnd();


glBegin(GL_POLYGON);//Left Building3
        glColor3ub(88, 25, 27);
        glVertex2f(0.1,0.1);
        glVertex2f(-0.25,0.1);
        glVertex2f(-0.3,0.07);
        glVertex2f(-0.3,-0.67);
        glVertex2f(-0.25,-0.7);
        glVertex2f(0.1,-0.7);
        glEnd();
glBegin(GL_LINES);
        glColor3ub(31, 5, 6);
        glVertex2f(-0.25,0.1);
        glVertex2f(-0.25,-0.7);
        glEnd();

glBegin(GL_QUADS);
        glColor3ub(154, 224, 222);
        glVertex2f(0.08,0.08);
        glVertex2f(-0.23,0.08);
        glVertex2f(-0.23,-0.02);
        glVertex2f(0.08,-0.02);
        glEnd();
glTranslatef(0.0f, -0.13f, 0.0f);
glBegin(GL_QUADS);
        glColor3ub(154, 224, 222);
        glVertex2f(0.08,0.08);
        glVertex2f(-0.23,0.08);
        glVertex2f(-0.23,-0.02);
        glVertex2f(0.08,-0.02);
        glEnd();
glTranslatef(0.0f, -0.13f, 0.0f);
glBegin(GL_QUADS);
        glColor3ub(154, 224, 222);
        glVertex2f(0.08,0.08);
        glVertex2f(-0.23,0.08);
        glVertex2f(-0.23,-0.02);
        glVertex2f(0.08,-0.02);
        glEnd();
glTranslatef(0.0f, -0.13f, 0.0f);
glBegin(GL_QUADS);
        glColor3ub(154, 224, 222);
        glVertex2f(0.08,0.08);
        glVertex2f(-0.23,0.08);
        glVertex2f(-0.23,-0.02);
        glVertex2f(0.08,-0.02);
        glEnd();
glTranslatef(0.0f, -0.13f, 0.0f);
glBegin(GL_QUADS);
        glColor3ub(154, 224, 222);
        glVertex2f(0.08,0.08);
        glVertex2f(-0.23,0.08);
        glVertex2f(-0.23,-0.02);
        glVertex2f(0.08,-0.02);
        glEnd();
glLoadIdentity();
glLoadIdentity();
glLoadIdentity();
glLoadIdentity();
glBegin(GL_QUADS);
        glColor3ub(154, 224, 222);
        glVertex2f(0.02,-0.6);
        glVertex2f(-0.05,-0.6);
        glVertex2f(-0.05,-0.7);
        glVertex2f(0.02,-0.7);
        glEnd();


glBegin(GL_POLYGON);//Left Building4
        glColor3ub(237, 187, 188);
        glVertex2f(0.4,0.1);
        glVertex2f(0.15,0.1);
        glVertex2f(0.1,0.07);
        glVertex2f(0.1,-0.67);
        glVertex2f(0.15,-0.7);
        glVertex2f(0.4,-0.7);
        glEnd();
glBegin(GL_LINES);
        glColor3ub(174, 76, 81);
        glVertex2f(0.15,0.1);
        glVertex2f(0.15,-0.7);
        glEnd();
glBegin(GL_QUADS);
        glColor3ub(154, 224, 222);
        glVertex2f(0.37,0.08);
        glVertex2f(0.18,0.08);
        glVertex2f(0.18,-0.02);
        glVertex2f(0.37,-0.02);
        glEnd();
glTranslatef(0.0f, -0.13f, 0.0f);
glBegin(GL_QUADS);
       glColor3ub(154, 224, 222);
        glVertex2f(0.37,0.08);
        glVertex2f(0.18,0.08);
        glVertex2f(0.18,-0.02);
        glVertex2f(0.37,-0.02);
        glEnd();
glTranslatef(0.0f, -0.13f, 0.0f);
glBegin(GL_QUADS);
       glColor3ub(154, 224, 222);
        glVertex2f(0.37,0.08);
        glVertex2f(0.18,0.08);
        glVertex2f(0.18,-0.02);
        glVertex2f(0.37,-0.02);
        glEnd();
glTranslatef(0.0f, -0.13f, 0.0f);
glBegin(GL_QUADS);
       glColor3ub(154, 224, 222);
        glVertex2f(0.37,0.08);
        glVertex2f(0.18,0.08);
        glVertex2f(0.18,-0.02);
        glVertex2f(0.37,-0.02);
        glEnd();
glTranslatef(0.0f, -0.13f, 0.0f);
glBegin(GL_QUADS);
       glColor3ub(154, 224, 222);
        glVertex2f(0.37,0.08);
        glVertex2f(0.18,0.08);
        glVertex2f(0.18,-0.02);
        glVertex2f(0.37,-0.02);
        glEnd();
glLoadIdentity();

glLoadIdentity();

glLoadIdentity();

glLoadIdentity();
glBegin(GL_QUADS);
        glColor3ub(154, 224, 222);
        glVertex2f(0.35,-0.6);
        glVertex2f(0.25,-0.6);
        glVertex2f(0.25,-0.7);
        glVertex2f(0.35,-0.7);
        glEnd();
glTranslatef(-1.73,-0.08,0);
glLineWidth(4);
glBegin(GL_LINES);
        glColor3ub(78, 19, 22);
        glVertex2f(0.8,-0.4);
        glVertex2f(0.8,-0.65);
        glEnd();
glBegin(GL_TRIANGLE_FAN);
	glColor3ub(78, 181, 54);

	    xt=0.78;
	    yt=-0.5;
		glVertex2f(xt, yt);
		for(it = 0; it<= 100;it++) {
			glVertex2f(
		            xt + (0.05 * cos(it *  2.0f*PI/ 100)),
			    yt + (0.05 * sin(it * 2.0f*PI / 100))
			);
		}
	glEnd();
glBegin(GL_TRIANGLE_FAN);
	glColor3ub(78, 181, 54);

	    xt1=0.8;
	    yt1=-0.45;
		glVertex2f(xt1, yt1);
		for(it = 0; it<= 100;it++) {
			glVertex2f(
		            xt1 + (0.06 * cos(it *  2.0f*PI/ 100)),
			    yt1 + (0.06 * sin(it * 2.0f*PI / 100))
			);
		}
	glEnd();
glBegin(GL_TRIANGLE_FAN);
	glColor3ub(78, 181, 54);

	    xt2=0.82;
	    yt2=-0.5;
		glVertex2f(xt1, yt1);
		for(it = 0; it<= 100;it++) {
			glVertex2f(
		            xt2 + (0.06 * cos(it *  2.0f*PI/ 100)),
			    yt2 + (0.06 * sin(it * 2.0f*PI / 100))
			);
		}
	glEnd();
glLoadIdentity();
//Street Lights
glLineWidth(4);
glBegin(GL_LINES);
glColor3ub(10,10,10);
glVertex2f(-0.8,-0.75);
glVertex2f(-0.8,-0.5);
glEnd();
glBegin(GL_LINES);
glColor3ub(10,10,10);
glVertex2f(-0.805,-0.5);
glVertex2f(-0.65,-0.5);
glEnd();
glBegin(GL_QUADS);
        glColor3ub(236, 229, 95);
        glVertex2f(-0.65,-0.5);
        glVertex2f(-0.70,-0.5);
        glVertex2f(-0.70,-0.53);
        glVertex2f(-0.65,-0.53);
        glEnd();

glTranslatef(+0.5f, 0.0f, 0.0f);
glBegin(GL_LINES);
glColor3ub(10,10,10);
glVertex2f(-0.8,-0.75);
glVertex2f(-0.8,-0.5);
glEnd();
glBegin(GL_LINES);
glColor3ub(10,10,10);
glVertex2f(-0.805,-0.5);
glVertex2f(-0.65,-0.5);
glEnd();
glBegin(GL_QUADS);
        glColor3ub(236, 229, 95);
        glVertex2f(-0.65,-0.5);
        glVertex2f(-0.70,-0.5);
        glVertex2f(-0.70,-0.53);
        glVertex2f(-0.65,-0.53);
        glEnd();
glTranslatef(+0.5f, 0.0f, 0.0f);
glBegin(GL_LINES);
glColor3ub(10,10,10);
glVertex2f(-0.8,-0.75);
glVertex2f(-0.8,-0.5);
glEnd();
glBegin(GL_LINES);
glColor3ub(10,10,10);
glVertex2f(-0.805,-0.5);
glVertex2f(-0.65,-0.5);
glEnd();
glBegin(GL_QUADS);
        glColor3ub(236, 229, 95);
        glVertex2f(-0.65,-0.5);
        glVertex2f(-0.70,-0.5);
        glVertex2f(-0.70,-0.53);
        glVertex2f(-0.65,-0.53);
        glEnd();
        glTranslatef(+0.5f, 0.0f, 0.0f);
glBegin(GL_LINES);
glColor3ub(10,10,10);
glVertex2f(-0.8,-0.75);
glVertex2f(-0.8,-0.5);
glEnd();
glBegin(GL_LINES);
glColor3ub(10,10,10);
glVertex2f(-0.805,-0.5);
glVertex2f(-0.65,-0.5);
glEnd();
glBegin(GL_QUADS);
        glColor3ub(236, 229, 95);
        glVertex2f(-0.65,-0.5);
        glVertex2f(-0.70,-0.5);
        glVertex2f(-0.70,-0.53);
        glVertex2f(-0.65,-0.53);
        glEnd();
glLoadIdentity();
glLoadIdentity();
glLoadIdentity();

glLineWidth(1);
//road
glBegin(GL_QUADS);
        glColor3ub(158,158,158);
        glVertex2f(1.0,-0.8);
        glVertex2f(-1.0,-0.8);
        glVertex2f(-1.0,-1.0);
        glVertex2f(1.0,-1.0);
        glEnd();
//Road Stripes
glBegin(GL_QUADS);
        glColor3ub(255, 255, 255);
        glVertex2f(1.0,-0.89);
        glVertex2f(0.8,-0.89);
        glVertex2f(0.83,-0.91);
        glVertex2f(1.0,-0.91);
        glEnd();
glBegin(GL_QUADS);
        glColor3ub(255, 255, 255);
        glVertex2f(0.6,-0.89);
        glVertex2f(0.3,-0.89);
        glVertex2f(0.33,-0.91);
        glVertex2f(0.63,-0.91);
        glEnd();
glBegin(GL_QUADS);
        glColor3ub(255, 255, 255);
        glVertex2f(0.12,-0.89);
        glVertex2f(-0.12,-0.89);
        glVertex2f(-0.15,-0.91);
        glVertex2f(0.15,-0.91);
        glEnd();
glBegin(GL_QUADS);
        glColor3ub(255, 255, 255);
        glVertex2f(-1.0,-0.89);
        glVertex2f(-0.8,-0.89);
        glVertex2f(-0.83,-0.91);
        glVertex2f(-1.0,-0.91);
        glEnd();
glBegin(GL_QUADS);
        glColor3ub(255, 255, 255);
        glVertex2f(-0.6,-0.89);
        glVertex2f(-0.3,-0.89);
        glVertex2f(-0.33,-0.91);
        glVertex2f(-0.63,-0.91);
        glEnd();

//left to right
//car
glPushMatrix();
glTranslatef(position,0,0);
glBegin(GL_QUADS);
        glColor3ub(151, 79, 68);
        glVertex2f(-0.64,-0.86);
        glVertex2f(-0.9,-0.86);
        glVertex2f(-0.9,-0.79);
        glVertex2f(-0.65,-0.79);
glBegin(GL_QUADS);
        glColor3ub(151, 79, 68);
        glVertex2f(-0.73,-0.74);
        glVertex2f(-0.82,-0.74);
        glVertex2f(-0.85,-0.79);
        glVertex2f(-0.7,-0.79);
glBegin(GL_QUADS);
        glColor3ub(200, 247, 254);
        glVertex2f(-0.735,-0.745);
        glVertex2f(-0.816,-0.745);
        glVertex2f(-0.84,-0.785);
        glVertex2f(-0.71,-0.785);
glBegin(GL_QUADS);
        glColor3ub(234, 241, 91);
        glVertex2f(-0.645,-0.82);
        glVertex2f(-0.67,-0.82);
        glVertex2f(-0.67,-0.8);
        glVertex2f(-0.647,-0.8);
glBegin(GL_QUADS);
        glColor3ub(241, 96, 91);
        glVertex2f(-0.88,-0.82);
        glVertex2f(-0.9,-0.82);
        glVertex2f(-0.9,-0.8);
        glVertex2f(-0.88,-0.8);
glEnd();
glBegin(GL_TRIANGLE_FAN);
	glColor3ub(0, 0, 0);

	    xt=-0.84;
	    yt=-0.845;
		glVertex2f(xt, yt);
		for(it = 0; it<= 100;it++) {
			glVertex2f(
		            xt + (0.03 * cos(it *  2.0f*PI/ 100)),
			    yt + (0.03 * sin(it * 2.0f*PI / 100))
			);
		}
	glEnd();
glBegin(GL_TRIANGLE_FAN);
	glColor3ub(0, 0, 0);

	    xt=-0.71;
	    yt=-0.845;
		glVertex2f(xt, yt);
		for(it = 0; it<= 100;it++) {
			glVertex2f(
		            xt + (0.03 * cos(it *  2.0f*PI/ 100)),
			    yt + (0.03 * sin(it * 2.0f*PI / 100))
			);
		}
	glEnd();

glTranslatef(+1.1,0,0);
glBegin(GL_QUADS);
        glColor3ub(163, 179, 5);
        glVertex2f(-0.64,-0.86);
        glVertex2f(-0.9,-0.86);
        glVertex2f(-0.9,-0.79);
        glVertex2f(-0.65,-0.79);
glBegin(GL_QUADS);
        glColor3ub(163, 179, 5);
        glVertex2f(-0.73,-0.74);
        glVertex2f(-0.82,-0.74);
        glVertex2f(-0.85,-0.79);
        glVertex2f(-0.7,-0.79);
glBegin(GL_QUADS);
        glColor3ub(200, 247, 254);
        glVertex2f(-0.735,-0.745);
        glVertex2f(-0.816,-0.745);
        glVertex2f(-0.84,-0.785);
        glVertex2f(-0.71,-0.785);
glBegin(GL_QUADS);
        glColor3ub(234, 241, 91);
        glVertex2f(-0.645,-0.82);
        glVertex2f(-0.67,-0.82);
        glVertex2f(-0.67,-0.8);
        glVertex2f(-0.647,-0.8);
glBegin(GL_QUADS);
        glColor3ub(241, 96, 91);
        glVertex2f(-0.88,-0.82);
        glVertex2f(-0.9,-0.82);
        glVertex2f(-0.9,-0.8);
        glVertex2f(-0.88,-0.8);
glEnd();
glBegin(GL_TRIANGLE_FAN);
	glColor3ub(0, 0, 0);

	    xt=-0.84;
	    yt=-0.845;
		glVertex2f(xt, yt);
		for(it = 0; it<= 100;it++) {
			glVertex2f(
		            xt + (0.03 * cos(it *  2.0f*PI/ 100)),
			    yt + (0.03 * sin(it * 2.0f*PI / 100))
			);
		}
	glEnd();
glBegin(GL_TRIANGLE_FAN);
	glColor3ub(0, 0, 0);

	    xt=-0.71;
	    yt=-0.845;
		glVertex2f(xt, yt);
		for(it = 0; it<= 100;it++) {
			glVertex2f(
		            xt + (0.03 * cos(it *  2.0f*PI/ 100)),
			    yt + (0.03 * sin(it * 2.0f*PI / 100))
			);
		}
	glEnd();

glTranslatef(0.5,0,0);
glBegin(GL_QUADS);
        glColor3ub(4, 14, 139);
        glVertex2f(-0.64,-0.86);
        glVertex2f(-0.9,-0.86);
        glVertex2f(-0.9,-0.79);
        glVertex2f(-0.65,-0.79);
glBegin(GL_QUADS);
        glColor3ub(4, 14, 139);
        glVertex2f(-0.73,-0.74);
        glVertex2f(-0.88,-0.74);
        glVertex2f(-0.9,-0.79);
        glVertex2f(-0.7,-0.79);
glBegin(GL_QUADS);
        glColor3ub(200, 247, 254);
        glVertex2f(-0.735,-0.745);
        glVertex2f(-0.876,-0.745);
        glVertex2f(-0.89,-0.785);
        glVertex2f(-0.71,-0.785);
glBegin(GL_QUADS);
        glColor3ub(234, 241, 91);
        glVertex2f(-0.645,-0.82);
        glVertex2f(-0.67,-0.82);
        glVertex2f(-0.67,-0.8);
        glVertex2f(-0.647,-0.8);
glBegin(GL_QUADS);
        glColor3ub(241, 96, 91);
        glVertex2f(-0.88,-0.82);
        glVertex2f(-0.9,-0.82);
        glVertex2f(-0.9,-0.8);
        glVertex2f(-0.88,-0.8);
glEnd();
glBegin(GL_TRIANGLE_FAN);
	glColor3ub(0, 0, 0);

	    xt=-0.84;
	    yt=-0.845;
		glVertex2f(xt, yt);
		for(it = 0; it<= 100;it++) {
			glVertex2f(
		            xt + (0.03 * cos(it *  2.0f*PI/ 100)),
			    yt + (0.03 * sin(it * 2.0f*PI / 100))
			);
		}
	glEnd();
glBegin(GL_TRIANGLE_FAN);
	glColor3ub(0, 0, 0);

	    xt=-0.71;
	    yt=-0.845;
		glVertex2f(xt, yt);
		for(it = 0; it<= 100;it++) {
			glVertex2f(
		            xt + (0.03 * cos(it *  2.0f*PI/ 100)),
			    yt + (0.03 * sin(it * 2.0f*PI / 100))
			);
		}
	glEnd();
glLoadIdentity();
glLoadIdentity();
glPopMatrix();
//bus
glPushMatrix();
glTranslatef(position,0,0);
glTranslatef(0.4,0,0);
glBegin(GL_QUADS);
        glColor3ub(45, 149, 107);
        glVertex2f(-0.35,-0.86);
        glVertex2f(-0.9,-0.86);
        glVertex2f(-0.9,-0.67);
        glVertex2f(-0.35,-0.67);

glBegin(GL_QUADS);
        glColor3ub(200, 247, 254);
        glVertex2f(-0.35,-0.675);
        glVertex2f(-0.38,-0.675);
        glVertex2f(-0.38,-0.775);
        glVertex2f(-0.35,-0.775);
glBegin(GL_QUADS);
        glColor3ub(200, 247, 254);
        glVertex2f(-0.39,-0.685);
        glVertex2f(-0.89,-0.685);
        glVertex2f(-0.89,-0.765);
        glVertex2f(-0.39,-0.765);

glBegin(GL_QUADS);
        glColor3ub(234, 241, 91);
        glVertex2f(-0.35,-0.84);
        glVertex2f(-0.37,-0.84);
        glVertex2f(-0.37,-0.8);
        glVertex2f(-0.35,-0.8);
glBegin(GL_QUADS);
        glColor3ub(241, 96, 91);
        glVertex2f(-0.885,-0.84);
        glVertex2f(-0.9,-0.84);
        glVertex2f(-0.9,-0.78);
        glVertex2f(-0.885,-0.78);
glEnd();
glBegin(GL_TRIANGLE_FAN);
	glColor3ub(0, 0, 0);

	    xt=-0.84;
	    yt=-0.845;
		glVertex2f(xt, yt);
		for(it = 0; it<= 100;it++) {
			glVertex2f(
		            xt + (0.04 * cos(it *  2.0f*PI/ 100)),
			    yt + (0.04 * sin(it * 2.0f*PI / 100))
			);
		}
	glEnd();
glBegin(GL_TRIANGLE_FAN);
	glColor3ub(0, 0, 0);

	    xt=-0.75;
	    yt=-0.845;
		glVertex2f(xt, yt);
		for(it = 0; it<= 100;it++) {
			glVertex2f(
		            xt + (0.04 * cos(it *  2.0f*PI/ 100)),
			    yt + (0.04 * sin(it * 2.0f*PI / 100))
			);
		}
	glEnd();
glBegin(GL_TRIANGLE_FAN);
	glColor3ub(0, 0, 0);

	    xt=-0.43;
	    yt=-0.845;
		glVertex2f(xt, yt);
		for(it = 0; it<= 100;it++) {
			glVertex2f(
		            xt + (0.04 * cos(it *  2.0f*PI/ 100)),
			    yt + (0.04 * sin(it * 2.0f*PI / 100))
			);
		}
	glEnd();
glLoadIdentity();
glPopMatrix();
//right to left
//car
glPushMatrix();
glTranslatef(position2,0,0);
glTranslatef(0.5,-0.1,0);
glBegin(GL_QUADS);
        glColor3ub(101, 32, 32);
        glVertex2f(-0.65,-0.86);
        glVertex2f(-0.9,-0.86);
        glVertex2f(-0.89,-0.79);
        glVertex2f(-0.65,-0.79);
glBegin(GL_QUADS);
        glColor3ub(101, 32, 32);
        glVertex2f(-0.67,-0.74);
        glVertex2f(-0.8,-0.74);
        glVertex2f(-0.842,-0.79);
        glVertex2f(-0.65,-0.79);
glBegin(GL_QUADS);
        glColor3ub(200, 247, 254);
        glVertex2f(-0.675,-0.745);
        glVertex2f(-0.795,-0.745);
        glVertex2f(-0.83,-0.785);
        glVertex2f(-0.657,-0.785);
glBegin(GL_QUADS);
        glColor3ub(241, 96, 91);
        glVertex2f(-0.65,-0.82);
        glVertex2f(-0.67,-0.82);
        glVertex2f(-0.67,-0.8);
        glVertex2f(-0.65,-0.8);
glBegin(GL_QUADS);
        glColor3ub(234, 241, 91);
        glVertex2f(-0.87,-0.82);
        glVertex2f(-0.895,-0.82);
        glVertex2f(-0.893,-0.8);
        glVertex2f(-0.87,-0.8);
glEnd();
glBegin(GL_TRIANGLE_FAN);
	glColor3ub(0, 0, 0);

	    xt=-0.84;
	    yt=-0.845;
		glVertex2f(xt, yt);
		for(it = 0; it<= 100;it++) {
			glVertex2f(
		            xt + (0.03 * cos(it *  2.0f*PI/ 100)),
			    yt + (0.03 * sin(it * 2.0f*PI / 100))
			);
		}
	glEnd();
glBegin(GL_TRIANGLE_FAN);
	glColor3ub(0, 0, 0);

	    xt=-0.71;
	    yt=-0.845;
		glVertex2f(xt, yt);
		for(it = 0; it<= 100;it++) {
			glVertex2f(
		            xt + (0.03 * cos(it *  2.0f*PI/ 100)),
			    yt + (0.03 * sin(it * 2.0f*PI / 100))
			);
		}
	glEnd();
glTranslatef(1.8,0,0);
glBegin(GL_QUADS);
        glColor3ub(245, 239, 239);
        glVertex2f(-0.65,-0.86);
        glVertex2f(-0.9,-0.86);
        glVertex2f(-0.89,-0.79);
        glVertex2f(-0.65,-0.79);
glBegin(GL_QUADS);
        glColor3ub(245, 239, 239);
        glVertex2f(-0.67,-0.74);
        glVertex2f(-0.8,-0.74);
        glVertex2f(-0.842,-0.79);
        glVertex2f(-0.65,-0.79);
glBegin(GL_QUADS);
        glColor3ub(200, 247, 254);
        glVertex2f(-0.675,-0.745);
        glVertex2f(-0.795,-0.745);
        glVertex2f(-0.83,-0.785);
        glVertex2f(-0.657,-0.785);
glBegin(GL_QUADS);
        glColor3ub(241, 96, 91);
        glVertex2f(-0.65,-0.82);
        glVertex2f(-0.67,-0.82);
        glVertex2f(-0.67,-0.8);
        glVertex2f(-0.65,-0.8);
glBegin(GL_QUADS);
        glColor3ub(234, 241, 91);
        glVertex2f(-0.87,-0.82);
        glVertex2f(-0.895,-0.82);
        glVertex2f(-0.893,-0.8);
        glVertex2f(-0.87,-0.8);
glEnd();
glBegin(GL_TRIANGLE_FAN);
	glColor3ub(0, 0, 0);

	    xt=-0.84;
	    yt=-0.845;
		glVertex2f(xt, yt);
		for(it = 0; it<= 100;it++) {
			glVertex2f(
		            xt + (0.03 * cos(it *  2.0f*PI/ 100)),
			    yt + (0.03 * sin(it * 2.0f*PI / 100))
			);
		}
	glEnd();
glBegin(GL_TRIANGLE_FAN);
	glColor3ub(0, 0, 0);

	    xt=-0.71;
	    yt=-0.845;
		glVertex2f(xt, yt);
		for(it = 0; it<= 100;it++) {
			glVertex2f(
		            xt + (0.03 * cos(it *  2.0f*PI/ 100)),
			    yt + (0.03 * sin(it * 2.0f*PI / 100))
			);
		}
	glEnd();
glTranslatef(1.0,0,0);
glBegin(GL_QUADS);
        glColor3ub(245, 239, 239);
        glVertex2f(-0.65,-0.86);
        glVertex2f(-0.9,-0.86);
        glVertex2f(-0.89,-0.79);
        glVertex2f(-0.65,-0.79);
glBegin(GL_QUADS);
        glColor3ub(245, 239, 239);
        glVertex2f(-0.72,-0.74);
        glVertex2f(-0.8,-0.74);
        glVertex2f(-0.842,-0.79);
        glVertex2f(-0.69,-0.79);
glBegin(GL_QUADS);
        glColor3ub(200, 247, 254);
        glVertex2f(-0.725,-0.745);
        glVertex2f(-0.795,-0.745);
        glVertex2f(-0.83,-0.785);
        glVertex2f(-0.7,-0.785);
glBegin(GL_QUADS);
        glColor3ub(241, 96, 91);
        glVertex2f(-0.65,-0.82);
        glVertex2f(-0.67,-0.82);
        glVertex2f(-0.67,-0.8);
        glVertex2f(-0.65,-0.8);
glBegin(GL_QUADS);
        glColor3ub(234, 241, 91);
        glVertex2f(-0.87,-0.82);
        glVertex2f(-0.895,-0.82);
        glVertex2f(-0.893,-0.8);
        glVertex2f(-0.87,-0.8);
glEnd();
glBegin(GL_TRIANGLE_FAN);
	glColor3ub(0, 0, 0);

	    xt=-0.84;
	    yt=-0.845;
		glVertex2f(xt, yt);
		for(it = 0; it<= 100;it++) {
			glVertex2f(
		            xt + (0.03 * cos(it *  2.0f*PI/ 100)),
			    yt + (0.03 * sin(it * 2.0f*PI / 100))
			);
		}
	glEnd();
glBegin(GL_TRIANGLE_FAN);
	glColor3ub(0, 0, 0);

	    xt=-0.71;
	    yt=-0.845;
		glVertex2f(xt, yt);
		for(it = 0; it<= 100;it++) {
			glVertex2f(
		            xt + (0.03 * cos(it *  2.0f*PI/ 100)),
			    yt + (0.03 * sin(it * 2.0f*PI / 100))
			);
		}
	glEnd();
glLoadIdentity();
glLoadIdentity();
glLoadIdentity();

glPopMatrix();

//bus
glPushMatrix();
glTranslatef(position2,0,0);
glTranslatef(1.0,-0.1,0);
glBegin(GL_QUADS);
        glColor3ub(45, 149, 107);
        glVertex2f(-0.35,-0.86);
        glVertex2f(-0.9,-0.86);
        glVertex2f(-0.9,-0.67);
        glVertex2f(-0.35,-0.67);

glBegin(GL_QUADS);
        glColor3ub(200, 247, 254);
        glVertex2f(-0.87,-0.675);
        glVertex2f(-0.9,-0.675);
        glVertex2f(-0.9,-0.775);
        glVertex2f(-0.87,-0.775);
glBegin(GL_QUADS);
        glColor3ub(200, 247, 254);
        glVertex2f(-0.78,-0.685);
        glVertex2f(-0.86,-0.685);
        glVertex2f(-0.86,-0.85);
        glVertex2f(-0.78,-0.85);
glBegin(GL_QUADS);
        glColor3ub(200, 247, 254);
        glVertex2f(-0.36,-0.685);
        glVertex2f(-0.77,-0.685);
        glVertex2f(-0.77,-0.765);
        glVertex2f(-0.36,-0.765);
glBegin(GL_QUADS);
        glColor3ub(241, 96, 91);
        glVertex2f(-0.35,-0.84);
        glVertex2f(-0.365,-0.84);
        glVertex2f(-0.365,-0.78);
        glVertex2f(-0.35,-0.78);
glBegin(GL_QUADS);
        glColor3ub(234, 241, 91);
        glVertex2f(-0.88,-0.84);
        glVertex2f(-0.9,-0.84);
        glVertex2f(-0.9,-0.8);
        glVertex2f(-0.88,-0.8);
glEnd();
glBegin(GL_TRIANGLE_FAN);
	glColor3ub(0, 0, 0);

	    xt=-0.83;
	    yt=-0.845;
		glVertex2f(xt, yt);
		for(it = 0; it<= 100;it++) {
			glVertex2f(
		            xt + (0.04 * cos(it *  2.0f*PI/ 100)),
			    yt + (0.04 * sin(it * 2.0f*PI / 100))
			);
		}
	glEnd();
glBegin(GL_TRIANGLE_FAN);
	glColor3ub(0, 0, 0);

	    xt=-0.5;
	    yt=-0.845;
		glVertex2f(xt, yt);
		for(it = 0; it<= 100;it++) {
			glVertex2f(
		            xt + (0.04 * cos(it *  2.0f*PI/ 100)),
			    yt + (0.04 * sin(it * 2.0f*PI / 100))
			);
		}
	glEnd();
glBegin(GL_TRIANGLE_FAN);
	glColor3ub(0, 0, 0);

	    xt=-0.41;
	    yt=-0.845;
		glVertex2f(xt, yt);
		for(it = 0; it<= 100;it++) {
			glVertex2f(
		            xt + (0.04 * cos(it *  2.0f*PI/ 100)),
			    yt + (0.04 * sin(it * 2.0f*PI / 100))
			);
		}
	glEnd();

glTranslatef(-1.5,0,0);
glBegin(GL_QUADS);
        glColor3ub(45, 149, 107);
        glVertex2f(-0.35,-0.86);
        glVertex2f(-0.9,-0.86);
        glVertex2f(-0.9,-0.67);
        glVertex2f(-0.35,-0.67);

glBegin(GL_QUADS);
        glColor3ub(200, 247, 254);
        glVertex2f(-0.87,-0.675);
        glVertex2f(-0.9,-0.675);
        glVertex2f(-0.9,-0.775);
        glVertex2f(-0.87,-0.775);
glBegin(GL_QUADS);
        glColor3ub(200, 247, 254);
        glVertex2f(-0.78,-0.685);
        glVertex2f(-0.86,-0.685);
        glVertex2f(-0.86,-0.85);
        glVertex2f(-0.78,-0.85);
glBegin(GL_QUADS);
        glColor3ub(200, 247, 254);
        glVertex2f(-0.36,-0.685);
        glVertex2f(-0.77,-0.685);
        glVertex2f(-0.77,-0.765);
        glVertex2f(-0.36,-0.765);
glBegin(GL_QUADS);
        glColor3ub(241, 96, 91);
        glVertex2f(-0.35,-0.84);
        glVertex2f(-0.365,-0.84);
        glVertex2f(-0.365,-0.78);
        glVertex2f(-0.35,-0.78);
glBegin(GL_QUADS);
        glColor3ub(234, 241, 91);
        glVertex2f(-0.88,-0.84);
        glVertex2f(-0.9,-0.84);
        glVertex2f(-0.9,-0.8);
        glVertex2f(-0.88,-0.8);
glEnd();
glBegin(GL_TRIANGLE_FAN);
	glColor3ub(0, 0, 0);

	    xt=-0.83;
	    yt=-0.845;
		glVertex2f(xt, yt);
		for(it = 0; it<= 100;it++) {
			glVertex2f(
		            xt + (0.04 * cos(it *  2.0f*PI/ 100)),
			    yt + (0.04 * sin(it * 2.0f*PI / 100))
			);
		}
	glEnd();
glBegin(GL_TRIANGLE_FAN);
	glColor3ub(0, 0, 0);

	    xt=-0.5;
	    yt=-0.845;
		glVertex2f(xt, yt);
		for(it = 0; it<= 100;it++) {
			glVertex2f(
		            xt + (0.04 * cos(it *  2.0f*PI/ 100)),
			    yt + (0.04 * sin(it * 2.0f*PI / 100))
			);
		}
	glEnd();
glBegin(GL_TRIANGLE_FAN);
	glColor3ub(0, 0, 0);

	    xt=-0.41;
	    yt=-0.845;
		glVertex2f(xt, yt);
		for(it = 0; it<= 100;it++) {
			glVertex2f(
		            xt + (0.04 * cos(it *  2.0f*PI/ 100)),
			    yt + (0.04 * sin(it * 2.0f*PI / 100))
			);
		}
	glEnd();
glLoadIdentity();
glLoadIdentity();
glPopMatrix();



glutTimerFunc(5000,demo_rain,0);
	glFlush();
}
