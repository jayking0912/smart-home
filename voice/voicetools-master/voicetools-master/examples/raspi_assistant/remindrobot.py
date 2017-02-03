from voicetools import BaiduVoice
from voicetools import TuringRobot

# api key 及 secret key 请在百度语音官方网站注册获取
token = BaiduVoice.get_baidu_token('o1A14nQdfrgKuRMMXGfDhlZy', 'cead88eb6c402ae2afc076b060839086')
bv = BaiduVoice(token)
#print(bv)
# 语音识别
#results = bv.asr('path/to/your/audio/file')  # 返回识别结果列表，可选参数见百度语音文档
# 语音合成
audio = bv.tts("你好,欢迎")  # 返回 MP3 格式二进制数据，可选参数见百度语音文档
print(audio)
