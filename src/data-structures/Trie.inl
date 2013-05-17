#include "Trie.h"

template <typename T>
Trie<T>::TrieNode::TrieNode()
    : m_next(0)
    , m_previous(0)
    , m_children(0)
    , m_parent(0)
{
}

template <typename T>
Trie<T>::TrieNode::TrieNode(const T& value)
    : m_value(value)
    , m_next(0)
    , m_previous(0)
    , m_children(0)
    , m_parent(0)
{
}

template <typename T>
Trie<T>::Trie()
{

}

template <typename T>
typename Trie<T>::iterator Trie<T>::insert()
{

}
