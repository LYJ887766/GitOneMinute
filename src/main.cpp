/**************************************************
* һ����Gitʵս���� | GitOneMinute
* ��Ʒ�����������Ӿ� https://space.bilibili.com/387188622
* �γ���ҳ��https://www.roundvision.cc/category/git/
* github�ֿ�·����https://github.com/zhouxuan2023/GitOneMinute
* 
* ʱ���������վ��https://www.timetoolhub.com/zh
* ͨ�� "���� hello git! ��ʱ��ʱ���" �ĸ�ʽ���ڱ���Ŀ����������ְɣ�
* 
***************************************************/

#include <iostream>
#include <vector>
#include <string>
#include <chrono>
#include <thread>
#include <ctime>

int main() {
    // ��ʼ���ַ����б�
    std::vector<std::string> messages = {
                "zhouxuan hello git! 2025��09��09�� 22:06:46",
                "���������Ӿ� hello git! 2025��09��09�� 22:09:22",
    }; 

    // ��ȡ���100��
    std::vector<std::string> last100;
    if (messages.size() > 100) {
        last100.assign(messages.end() - 100, messages.end());
    }
    else {
        last100 = messages;
    }

    // ���д�ӡ��ÿ��֮�����ӳ�
    for (const auto& line : last100) {
        std::cout << line << std::endl;
        std::this_thread::sleep_for(std::chrono::milliseconds(100)); // 100�����ӳ�
    }

    // �ȴ��û������˳�
    std::cout << "\n��������˳�..." << std::endl;
    std::cin.get();

    return 0;
}