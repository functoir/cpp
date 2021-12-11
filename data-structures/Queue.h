/**
 * @file Queue.h
 * @author siavava <amittaijoel@outlook.com>
 * @brief Defines a queue data structure.
 * @version 0.1
 * @date 2021-12-08
 * 
 * @copyright Copyright (c) 2021
 * 
 */

template <typename T>
class Queue {
  public:
    /**
     * @brief Construct a new Queue object
     * 
     */
    Queue() {};

    /**
     * @brief Construct a new Queue object with the given iterable
     * 
     */
    Queue(const Queue<T> &other) {};

  public:
    /**
     * @brief Destroy the Queue object
     * 
     */
    virtual ~Queue() {};

    /**
     * @brief Add an element to the queue
     * 
     * @param element: enqueue element
     */
    virtual void enqueue(T item) = 0;

    /**
     * @brief Remove an element from the queue
     * 
     * @return T: dequeued element
     */
    virtual T dequeue() = 0;

    /**
     * @brief Check if the queue is empty
     * 
     * @return true: queue is empty
     * @return false: queue is not empty
     */
    virtual bool isEmpty() = 0;

    /**
     * @brief Clear the queue
     * 
     */
    virtual void clear() = 0;

    /**
     * @brief Get the size of the queue
     * 
     * @return int: queue size
     */
    virtual int size() = 0;
};
