#ifndef _TEST_MYSQL_H_
#define _TEST_MYSQL_H_

#include <cpptest.h>

class TestTask : public Test::Suite
{
public:
	TestTask();

private:
	void test_simple();
	void test_chain();
	void test_pipeline();
	void test_sleep();
	void test_merge();
	void test_proirity();
	void test_mutex();
	void test_condition_variable();
	void test_blocking_message();
	void test_cancel();
	void test_performance();
	void test_yield();
	void test_timer();
};

#endif //_TEST_MYSQL_H_
