#include <bits/stdc++.h>
using namespace std;

const int ALPHABET_SIZE = 26;

struct TrieNode
{
    struct TrieNode *children[26];
    int minlevelpresent=-1;
    bool isEndOfWord=false;
    int rootnodelevel=-1;
};
struct TrieNode *getNode(int min1)
{
    struct TrieNode *pNode =  new TrieNode;

    pNode->isEndOfWord = false;

   // pNode->minlevelpresent=min1;
    for (int i = 0; i < 26; i++)
        pNode->children[i] = NULL;

    return pNode;
}

void insert(struct TrieNode *root, string key,int min1)
{
    struct TrieNode *pCrawl = root;
    if(pCrawl->minlevelpresent==-1)
    pCrawl->minlevelpresent=min1;
    for (int i = 0; i < key.length(); i++)
    {
        int index = key[i] - 'a';
        //cout<<key[i]<<min1;
        if (!pCrawl->children[index])
         {   pCrawl->children[index] = getNode(min1);
         if(pCrawl->minlevelpresent==-1)
            pCrawl->minlevelpresent=min1;
            if(pCrawl->children[index]->minlevelpresent==-1)
            pCrawl->children[index]->minlevelpresent=min1;
             //cout<<pCrawl->children[index]->minlevelpresent<<"\n";
         }

        pCrawl = pCrawl->children[index];
    }

    pCrawl->isEndOfWord = true;
    if(pCrawl->rootnodelevel=-1)
    pCrawl->rootnodelevel=min1;
    else
    pCrawl->rootnodelevel=min(min1,pCrawl->rootnodelevel);
}

bool isLeafNode(struct TrieNode* root)
{
    return (root->isEndOfWord!=false);
}

void search(struct TrieNode* root, char str[],int level,string s , int t,int e)
{
    //cout<<e;
    if(e==s.size())
    {
       // cout<<root->rootnodelevel;
        while(!((isLeafNode(root)) && (root->rootnodelevel<=t)))
            {
              //  cout<<root->minlevelpresent;
                int z1=0;
               // cout<<"why not here";
                for(int i=0;i<26;i++)
                {
                    if(root->children[i] && root->children[i]->minlevelpresent<=t)
                    {
                        //cout<<"11";
                        //cout<<i+'a';
                        str[level] = i + 'a';
                        //cout<<level;
                        root=root->children[i];
                        level++;
                         z1++;
                        break;


                    }
                }
                if(z1==0)
                {
                    break;
                }
            }

        str[level]='\0';
        cout<<str<<"\n";
        return;

    }
    else
    {
        int it1=s[e]-'a';
        if(root->children[it1]!=NULL && root->children[it1]->minlevelpresent<=t)
        {
            str[level]=s[e];
            search(root->children[it1],str,level+1,s,t,e+1);
        }
        else
        {

           // cout<<"here";
            //cout<<root->minlevelpresent;
            //cout<<isLeafNode(root);
             while(!((isLeafNode(root)) && (root->rootnodelevel<=t)))
            {
                //cout<<root->minlevelpresent;

                int z1=0;
                for(int i=0;i<26;i++)
                {
                    if(root->children[i] && root->children[i]->minlevelpresent<=t)
                    {
                        //cout<<"here";
                        str[level] = i + 'a';
                        //cout<<str[level];
                        root=root->children[i];

                        level++;
                        z1++;
                        break;
                    }
                }
                if(z1==0)
                {
                    break;
                }
            }
             str[level]='\0';
        cout<<str<<"\n";
        return;
        }
    }
}

int main()
{
    int n;
    cin>>n;
    string s;
     struct TrieNode *root = getNode(0);
    for(int i=0;i<n;i++)
    {
        cin>>s;
        insert(root,s,i+1);
    }

        int t;
        cin>>t;
        while(t--)
        {
            int e;
            cin>>e>>s;
            char s2[200];
                           search(root,s2,0,s,e,0);
        }


    return 0;
}
