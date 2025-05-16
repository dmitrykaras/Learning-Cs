using System;

public class Matrix {
	private double[, ] data = new double[4, 4];

    public Matrix(); //�� ���������
    public Matrix(double[, ] values); //� �����������
    public Matrix(Matrix other); //�����������
    ~Matrix(); //����������

    public void SetElement(int row, int col, double value);
    public double GetElement(int row, int col);

    public void MultiplyByScalar(double scalar);
    public Matrix Transpose();

    public static Matrix operator +(Matrix a, Matrix b);
    public static Matrix operator -(Matrix a, Matrix b);
    public static Matrix ReadMatrix();
    public void Print();
}