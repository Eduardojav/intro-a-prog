Link* Link::insert(Link* n)
{
    if(n==0) return this;
    n->succ=this;
    this->prev=n
    return n;
}
