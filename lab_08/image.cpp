#include "image.h"

// task A 
void invert(){

      int img[MAX_H][MAX_W];
      int h, w;
      readImage(img, h, w);

       // read it from the file "inImage.pgm"
	// h and w were passed by reference and
	// now contain the dimensions of the picture
	// and the 2-dimesional array img contains the image data

	// Now we can manipulate the image the way we like
	// for example we copy its contents into a new array
      
	int out[MAX_H][MAX_W];
        
	for(int row = 0; row < h; row++) {
		for(int col = 0; col < w; col++) {
			out[row][col] = 255 - img[row][col];
		}
	}

	// and save this new image to file "outImage.pgm"
	writeImage("invert.pgm", out, h, w);

}
// task B 
void invert_half(){
      int img[MAX_H][MAX_W];
      int h, w;
      readImage(img, h, w);

       // read it from the file "inImage.pgm"
	// h and w were passed by reference and
	// now contain the dimensions of the picture
	// and the 2-dimesional array img contains the image data

	// Now we can manipulate the image the way we like
	// for example we copy its contents into a new array
      
	int out[MAX_H][MAX_W];
        
	for(int row = 0; row < h; row++) {
		for(int col = 0; col < w; col++) {
		  if(col > w/2){
			out[row][col] = 255 - img[row][col];
		  }
		  else{
		     	out[row][col] = img[row][col];
		  }
		}
	}

	// and save this new image to file "outImage.pgm"
	writeImage("invert_half.pgm", out, h, w);

}
// task C 
void box(){
   int img[MAX_H][MAX_W];
      int h, w;
      readImage(img, h, w);

       // read it from the file "inImage.pgm"
	// h and w were passed by reference and
	// now contain the dimensions of the picture
	// and the 2-dimesional array img contains the image data

	// Now we can manipulate the image the way we like
	// for example we copy its contents into a new array
      
	int out[MAX_H][MAX_W];
        
	for(int row = 0; row < h; row++) {
		for(int col = 0; col < w; col++) {
		  // col > 25% 
		  //if greater than 25% row and 25% column
		  if(row > (h/4) && col > (w/4)){
		     out[row][col] = 255;
		  }
		  else if(row > (h - (h/4)) && col < (w - (w/4))){
		    out[row][col] = img[row][col];
		  }
		  else{
		     out[row][col] = img[row][col];
		  }

		  if(col > (.25*w) && row > (h - .25*h)){
		    out[row][col] = img[row][col];
		  }
		  if(col > (w - (.25*w)) && row > (.25*h) ){
		    out[row][col] = img[row][col];
		  }
		}
	}

	// and save this new image to file "outImage.pgm"
	writeImage("box.pgm", out, h, w);

}
// 
void frame(){
   int img[MAX_H][MAX_W];
      int h, w;
      readImage(img, h, w);

       // read it from the file "inImage.pgm"
	// h and w were passed by reference and
	// now contain the dimensions of the picture
	// and the 2-dimesional array img contains the image data

	// Now we can manipulate the image the way we like
	// for example we copy its contents into a new array
      
      int out[MAX_H][MAX_W];
        
	for(int row = 0; row < h; row++)
	  {
		for(int col = 0; col < w; col++)
		  {
		  // col > 25% 
		  //if greater than 25% row and 25% column
		    if(row ==  (h/4) && (col > (w/4) && col < (w - w/4)))
		    {
		     out[row][col] = 255;
		    }
		    else if( col == (w/4) && (row > (h/4) && row < (h - h/4))){
		       out[row][col] = 255;
		    }
		    else if( col == (w - w/4) && (row > (h/4) && row < (h - h/4))){
		       out[row][col] = 255;
		    }
		    else if(row ==  (h - h/4) && (col > (w/4) && col < (w - w/4)))
		    {
		     out[row][col] = 255;
		    }
		    else{
		      out[row][col] = img[row][col];
		    }

		    
		    }
	}

	// and save this new image to file "outImage.pgm"
	writeImage("frame.pgm", out, h, w);

}

void scale(){
  int img[MAX_H][MAX_W];
      int h, w;
      readImage(img, h, w);
	// Now we can manipulate the image the way we like
	// for example we copy its contents into a new array
	int out[MAX_H][MAX_W];
	
	for(int row = h*2; row > 0; row--)
	  {
	    for(int col = w*2; col > 0; col--)
	      {
		 out[row][col] = img[row/2][col/2];
	      }
	    
	}

	// and save this new image to file "outImage.pgm"
	writeImage("scale.pgm", out, h*2, w*2);

}
void pixelate(){
  int img[MAX_H][MAX_W];
      int h, w;
      readImage(img, h, w);
	// Now we can manipulate the image the way we like
	// for example we copy its contents into a new array
	int out[MAX_H][MAX_W];

	int out_col = 0;
	int out_row = 0;
	int temp = 0;
	
	for(int row = 0; row < h*2; row+=2)
	  {
	    for(int col = 0; col < w*2; col+=2)
	      {
		out[row][col] = (img [row][col] + img [row+1][col] + img[row][col+1] + img[row+1][col+1])/4;
	      }
	}

	writeImage("pixelate.pgm", out, h, w);

}

void readImage(int image[MAX_H][MAX_W], int &height, int &width) {
	char c;
	int x;
	ifstream instr;
	instr.open("inImage.pgm");

	// read the header P2
	instr >> c;
	assert(c == 'P');
	instr >> c;
	assert(c == '2');

	// skip the comments (if any)
	while ((instr>>std::ws).peek() == '#') {
		instr.ignore(4096, '\n');
	}

	instr >> width;
	instr >> height;

	assert(width <= MAX_W);
	assert(height <= MAX_H);
	int max;
	instr >> max;
	assert(max == 255);

	for (int row = 0; row < height; row++)
		for (int col = 0; col < width; col++)
			instr >> image[row][col];
	instr.close();
	return;
}


// Writes a PGM file
// Need to provide the array data and the image dimensions
void writeImage(string filename, int image[MAX_H][MAX_W], int height, int width) {

	ofstream ostr;
	ostr.open(filename.c_str());
	if (ostr.fail()) {
		cout << "Unable to write file\n";
		exit(1);
	};

	// print the header
	ostr << "P2" << endl;
	// width, height
	ostr << width << ' ';
	ostr << height << endl;
	ostr << 255 << endl;

	for (int row = 0; row < height; row++) {
		for (int col = 0; col < width; col++) {
			assert(image[row][col] < 256);
			assert(image[row][col] >= 0);
			ostr << image[row][col] << ' ';
			ostr << endl;
		}
	}
	ostr.close();
	return;
}

