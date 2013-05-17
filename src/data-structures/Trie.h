#ifndef TRIE_H
#define TRIE_H

template <typename T>
class Trie
{
public:
    class iterator
    {

    };

protected:
    class TrieNode
    {
    public:
        TrieNode();
        TrieNode(const T& value);
        T m_value;
        TrieNode* m_next;
        TrieNode* m_previous;
        TrieNode* m_children;
        TrieNode* m_parent;
    };

public:
    Trie();

    iterator insert();
};

#endif // TRIE_H