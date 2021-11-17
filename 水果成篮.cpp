#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;


class Solution {
public:
	int totalFruit(vector<int>& fruits) {
		//��ֻ����������ͬ�����֣��ҳ�������Ӵ�
		//˫ָ���У���һ��ָ��i��ö�ٶ˵㣬��һ��ָ���Ǻ�i��صģ��ǿ���i������Һ�i֮��ֻ������Ԫ�ص�λ��
		int result = 0, sublen = 0;
		unordered_map<int, int> basket;
		for (int i = 0, left = 0; i < fruits.size(); i++) {
			basket[fruits[i]]++;
			sublen++;
			while (basket.size() > 2) {
				basket[fruits[left]]--;
				if (basket[fruits[left]] == 0) basket.erase(fruits[left]);
				left++;
				sublen--;//���������㣬��Ϊ֮ǰ���������������max�Ѿ�ʵʱ���µ�result����
			}
			if (sublen > result) result = sublen;
		}
		return result;
	}
};