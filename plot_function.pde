int n = parseInt(args[0]);

int division = width/n;
int x = division;
int y = division;
for(int i = 0; i <= n; i++) {
line(x,0,x,height);
line(0,y,width;y)
x+= division;
y+= division;
}

stroke(0);
strokeWeight(2);line(0, height/2, width, height/2);
line(width/2,0, width/2, height);
//calcular la funcion
int x, y = 0, px, py;
int xmin = -1*(n/2);
int xmax = n/2;
for(int x = xmin; x <= xmax; x++) {
println(x);
stroke(255,0,0);
strokeWeight(3);
point((x+xmin)+(division*(x+6)), y + height/2);
}
