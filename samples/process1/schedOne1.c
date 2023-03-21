#include <stdio.h>
#include <pthread.h>
#include <sched.h>
#include <assert.h>

/**
 * 线程策略
 */
static int getThreadPolicyFunc(pthread_attr_t *pAttr){
    int plicy;
    int igp = pthread_attr_getschedpolicy(pAttr, &plicy);
    assert(igp == 0);
    switch (plicy)
    {
    case SCHED_RR:
        printf("policy is->SCHED_RR.\n");
        break;
    case SCHED_FIFO:
        printf("policy is->SCHED_FIFO.\n");
        break;
    case SCHED_OTHER:
        printf("policy is->SCHED_OTHER.\n");
        break;  
    default:
        printf("policy is->unknow.\n");
        break;
    }
    return plicy;
}

/**
 * 输出线程优先级
 */
static void threadPriority(pthread_attr_t *pAttr, int policy)
{
}

/**
 * 获取线程优先级
 */
static void getThreadPriority(pthread_attr_t *pAttr)
{
}

int main()
{
    pthread_attr_t pAttr;
    getThreadPolicyFunc(&pAttr);
    return 0;
}