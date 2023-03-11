void setup() {
	int a, b, c, d, e, f, g;
	size(1000, 1000);

	a = 0;
	b = 250;
	c = 500;
	d = 750;
	e = 1000;
	f = 125;
	g = 375;

	color p = color(175, 100, 220);

	fill(p);
	rect(b, c, c, c);

	fill(150);
	rect(d, f, f, g);

	float blueValue = blue(p);
	fill(0, 0, blueValue);
	triangle(a, c, c, a, e, c);

	fill(50, 55, 100);
	circle(g, c + f, b);
	line(g, c, g, d);
	line(b, c + f, c, c + f);

	fill(170);
	rect(c + f, c + f, f, b + f);

	fill(50);
	circle(c + f + 20, d + 100, 20);
}

