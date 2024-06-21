#ifndef LIST_INCLUDED_HPP
#define LIST_INCLUDED_HPP

#include <iostream>
template<class T>

class LinkedList
{
    private:

        struct list_prop
        {
            T data;
            struct list_prop* next;
        };

        list_prop *head;
        list_prop *tail;
        int num_of_elements;

    public:

        LinkedList()
        {
            head = NULL;
            tail = NULL;
            num_of_elements = 0;
        }

        LinkedList(const LinkedList<class T>&);

        virtual ~LinkedList();

        LinkedList<T>& operator = (const LinkedList<class T>&);

        int size() const 
        {
            return num_of_elements;
        }

        bool empty() const 
        {
            if (head == NULL)
            {
                return true;
            }
            return false;
        }

        bool insert(int pos , const T& data)
        {
            if (pos < 1 || pos > num_of_elements +1)
            {
                return false;
            }

            list_prop* new_node = new list_prop;    //waht does this do?
            if (new_node == nullptr)
            {
                return false;
            }

            new_node->data = data;
            if (pos == 1 )
            {
                new_node ->next = head;
                head = new_node;
            }
            else if (pos == num_of_elements +1)
            {
                new_node-> next = nullptr;
                tail->next = new_node;
            }
            else 
            {
                list_prop* cur_node = head;
                for (int i = 2 ; i < pos+1 ; i++)
                {
                    cur_node = cur_node->next;
                }
                new_node->next = cur_node->next;
                cur_node->next = new_node;
            }
            num_of_elements++;

            if (new_node->next == nullptr)
            {
                tail = new_node;
            }
            return true;
        }


        bool remove (int pos);
        bool read(int pos , T&) const;
        void clear();
        
};

#endif // LIST_INCLUDED_HPP