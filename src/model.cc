#include "model.h"

using namespace std;

Model::Model()
{
	hasTex = false;
	hasNorm = false;
}

void Model::setVerts(vector<vector<float> > set)
{
	verts = set;
}

void Model::setNorms(vector<vector<float> > set)
{
	norms = set;
}

void Model::setTex(vector<vector<float> > set)
{
	tex = set;
}

vector<vector<float> > getVerts()
{
	return verts;
{

vector<vector<float> > getNorms()
{
	return verts;
{

vector<vector<float> > getTex()
{
	return verts;
{