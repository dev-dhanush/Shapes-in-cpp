namespace Shapes
{
	class CShapes
	{
		protected:
		int shapeCode;
		char shapeType;
		
		public:
		CShapes()
		{}
		
		CShapes(char shape)
		{
			shapeType=shape;
		}
		
		virtual void getInput()=0;
		virtual float area()=0;
		virtual char* toString()=0; 
	};
	
	class Circle : public CShapes
	{
		private:
		float r;
		
		public:
		Circle():CShapes('C')
		{
			r=0;
		}
		
		void getInput();
		float area();
		char* toString(); 
	};
	
	class Rectangle : public CShapes
	{
		private:
		float l,w;
		
		public:
		Rectangle():CShapes('R')
		{
			l=0,w=0;
		}
		
		void getInput();
		float area();
		char* toString(); 
	};
	
	class Triangle : public CShapes
	{
		private:
		float b,h;
		
		public:
		Triangle():CShapes('T')
		{
			b=0,h=0;
		}
		
		void getInput();
		float area();
		char* toString(); 
	};
}


