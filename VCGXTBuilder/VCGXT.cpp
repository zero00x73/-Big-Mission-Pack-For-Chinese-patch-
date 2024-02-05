﻿#include "VCGXT.h"

#include <array>
#include <iostream>
#include <fstream>
#include <regex>
#include <locale>
#include <codecvt>
#include <algorithm>

#include <cstring>
#include <cstdio>

struct CharPos
{
	unsigned __int8 rowIndex;
	unsigned __int8 columnIndex;
};

wchar_t MostUsedCharacters[] = L"阿啊哎哀唉埃挨癌矮艾爱碍安氨俺岸按案暗昂凹熬傲奥办半伴扮瓣邦帮膀傍棒包胞宝饱保堡报抱豹暴爆卑杯悲碑北贝备背倍被辈奔本崩逼鼻比彼笔币必毕闭辟碧蔽壁避臂边编蝙鞭扁便变遍辨辩标表别宾滨冰兵丙柄饼并病拨波玻剥播脖伯驳泊勃博搏膊薄卜补捕不布步部擦猜才材财裁采彩踩菜蔡参餐残蚕惨灿仓苍舱藏操曹槽草册侧测策层叉插查茶察差拆柴缠产阐颤昌长肠尝偿常厂场畅倡唱抄超巢朝潮吵炒车扯彻撤尘臣沉陈闯衬称趁撑成呈承诚城乘惩程橙吃池驰迟持匙尺齿斥赤翅充冲虫崇抽仇绸愁筹酬丑瞅臭出初除厨础储楚处触川穿传船喘串窗床晨创吹垂锤春纯唇醇词瓷慈辞磁雌此次刺从匆葱聪丛凑粗促催脆翠村存寸措错搭达答打大呆代带待袋逮戴丹单担胆旦但诞弹淡蛋氮当挡党荡刀导岛倒蹈到盗道稻得德的灯登等邓凳瞪低堤滴迪敌笛底抵地弟帝递第颠典点电店垫淀殿雕吊钓调掉爹跌叠蝶丁叮盯钉顶订定丢东冬懂动冻洞都斗抖陡豆督毒读独堵赌杜肚度渡端短段断锻堆队对吨敦蹲盾顿多夺朵躲俄鹅额恶饿鳄恩儿而尔耳二发乏伐罚阀法帆番翻凡烦繁反返犯泛饭范贩方坊芳防妨房肪仿访纺放飞非啡菲肥废沸肺费分纷芬坟粉份奋愤粪丰风枫封疯峰锋蜂冯逢缝凤奉佛否夫肤孵弗伏扶服浮符幅福辐蝠抚府辅腐父付妇负附复赴副傅富赋腹覆该改钙盖溉概干甘杆肝赶敢感刚岗纲缸钢港高搞稿告戈哥胳鸽割歌阁革格葛隔个各给根跟更耕工弓公功攻供宫恭巩拱共贡勾沟钩狗构购够估咕姑孤菇古谷股骨鼓固故顾瓜刮挂拐怪关观官冠馆管贯惯灌罐光广归龟规硅轨鬼柜贵桂滚棍郭锅国果裹过哈孩海害含函寒韩罕喊汉汗旱杭航毫豪好号浩耗呵喝合何和河核荷盒贺褐赫鹤黑嘿痕很狠恨哼恒横衡轰哄红宏洪虹鸿侯喉猴吼后厚候乎呼忽狐胡壶湖葫糊蝴虎互户护花华哗滑化划画话桦怀淮坏欢还环缓幻唤换患荒慌皇黄煌晃灰恢挥辉徽回毁悔汇会绘惠慧昏婚浑魂混活火伙或货获祸惑霍击饥圾机肌鸡积基迹绩激及吉级即极急疾集辑籍几己挤脊计记纪忌技际剂季既济继寂寄加夹佳家嘉甲贾钾价驾架假嫁稼尖坚间肩艰兼监减剪检简碱见件建剑健舰渐践鉴键箭江姜将浆僵疆讲奖蒋匠降交郊娇浇骄胶焦礁角脚搅叫轿较教阶皆接揭街节劫杰洁结捷截竭姐解介戒届界借巾今斤金津筋仅紧锦尽劲近进晋浸禁京经茎惊晶睛精鲸井颈景警净径竞竟敬境静镜纠究九久酒旧救就舅居局菊橘举矩句巨拒具俱剧惧据距聚卷倦决绝觉掘嚼军君均菌俊峻卡开凯慨刊堪砍看康抗炕考烤靠科棵颗壳咳可渴克刻客课肯坑空孔恐控口扣枯哭苦库裤酷夸跨块快宽款狂况矿亏葵愧溃昆困扩括阔垃拉啦喇腊蜡辣来莱赖兰拦栏蓝篮览懒烂滥郎狼廊朗浪离莉犁璃黎礼李里哩理鲤力历厉立丽利励例隶粒俩连帘怜莲联廉脸练炼恋链良凉梁粮两亮辆量辽疗聊僚了料列劣烈猎裂邻林临淋磷灵玲凌铃陵羚零龄领岭令另溜刘流留硫瘤柳六龙笼隆垄拢楼漏露卢芦炉鲁陆录鹿碌路驴旅铝履律虑率绿氯滤卵乱掠略伦轮论罗萝逻螺裸洛络骆落妈麻马玛码蚂骂吗嘛埋买迈麦卖脉蛮满曼慢漫忙芒盲茫猫毛矛茅茂冒贸帽貌么没枚玫眉梅媒煤霉每美妹门闷们萌盟猛蒙孟梦弥迷谜米泌秘密蜜眠绵棉免勉面苗描秒妙庙灭民敏名明鸣命摸模膜摩磨蘑魔抹末沫陌莫漠墨默谋某母亩牡姆拇木目牧墓幕慕穆拿哪内那纳娜钠乃奶奈耐男南难囊恼脑闹呢嫩能尼泥你拟逆年念娘酿鸟尿捏您宁凝牛扭纽农浓弄奴努怒女暖挪诺哦欧偶爬帕怕拍排牌派攀盘判叛盼庞旁胖抛炮跑泡胚陪培赔佩配喷盆朋棚蓬鹏膨捧碰批披皮疲脾匹屁譬片偏篇骗漂飘瓢票拼贫频品平评凭苹屏瓶萍坡泼颇婆迫破剖扑铺葡蒲朴浦普谱七妻栖戚期欺漆齐其奇歧骑棋旗企岂启起气弃汽契砌器恰千迁牵铅谦签前钱潜浅遣欠枪腔强墙抢悄敲乔桥瞧巧切茄且窃亲侵秦琴禽勤青氢轻倾清情晴顷请庆穷丘秋蚯求球区曲驱屈躯趋取娶去趣圈全权泉拳犬劝券缺却雀确鹊裙群然燃染嚷壤让饶扰绕惹热人仁忍认任扔仍日绒荣容溶熔融柔肉如儒乳辱入软锐瑞润若弱撒洒萨塞赛三伞散桑嗓丧扫嫂色森僧杀沙纱刹砂傻啥晒山杉衫珊闪陕扇善伤商赏上尚梢烧稍少绍哨舌蛇舍设社射涉摄申伸身深神审婶肾甚渗慎升生声牲胜绳省圣盛剩尸失师诗施狮湿十什石时识实拾蚀食史使始驶士氏世市示式事侍势视试饰室是适逝释收手守首寿受兽售授瘦书抒叔枢殊疏舒输蔬熟暑署属鼠薯术束述树竖数刷耍衰摔甩帅双霜爽谁水税睡顺瞬说丝司私思斯撕死四寺似饲松耸宋送颂搜艘苏俗诉肃素速宿塑酸蒜算虽随髓岁遂碎穗孙损笋缩所索锁他它她塌塔踏胎台抬太态泰贪摊滩坛谈潭坦叹炭探碳汤唐堂塘糖躺趟涛掏逃桃陶淘萄讨套特疼腾藤梯踢啼提题蹄体替天添田甜填挑条跳贴铁厅听廷亭庭停蜓挺艇通同桐铜童统桶筒痛偷头投透突图徒涂途屠土吐兔团推腿退吞托拖脱驼妥拓唾挖哇蛙娃瓦歪外弯湾丸完玩顽挽晚碗万汪亡王网往忘旺望危威微为围违唯惟维伟伪尾纬委萎卫未位味胃谓喂慰魏温文纹闻蚊吻稳问翁窝我沃卧握乌污屋无吴吾五午伍武舞务物误悟雾夕西吸希析息牺悉惜晰稀溪锡熙嘻膝习席袭媳洗喜戏系细隙虾瞎峡狭辖霞下吓夏厦仙先纤掀鲜闲弦贤咸衔嫌显险县现线限宪陷献腺乡相香厢湘箱详祥翔享响想向巷项象像橡削消萧硝销小晓孝效校笑些歇协胁斜谐携鞋写泄泻卸屑械谢蟹心辛欣新信兴星猩刑行形型醒杏姓幸性凶兄匈胸雄熊休修羞朽秀绣袖嗅须虚需徐许序叙畜绪续蓄宣玄悬旋选穴学雪血寻巡询循训讯迅压呀鸦鸭牙绪续蓄宣玄悬旋选穴学雪血寻巡询循训讯迅压呀鸦鸭牙验焰雁燕央扬羊阳杨洋仰养氧痒样腰邀摇遥咬药要耀爷也冶野业叶页夜液一伊衣医依仪夷宜姨移遗疑乙已以矣蚁椅义亿忆艺议亦异役抑译易疫益谊逸意溢毅翼因阴音吟银引饮蚓隐印应英婴鹰迎盈营蝇赢影映硬哟拥永泳勇涌用优忧幽悠尤犹由邮油游友有又右幼诱于予余鱼娱渔愉愚与宇羽雨语玉吁育郁狱浴预域欲喻寓御裕遇愈誉豫元员园原圆袁援缘源远怨院愿曰约月岳钥悦阅跃越云匀允孕运晕韵蕴杂砸灾栽宰载再在咱暂赞脏葬遭糟早枣藻灶皂造噪燥躁则择泽责贼怎曾增赠渣扎眨炸摘宅窄债沾粘展占战站张章涨掌丈仗帐胀账障招找召兆赵照罩遮折哲者这浙针侦珍真诊枕阵振镇震争征挣睁蒸整正证郑政症之支汁芝枝知织肢脂蜘执直值职植殖止只旨址纸指趾至志制治质致智置中忠终钟肿种仲众重州舟周洲轴宙皱骤朱株珠诸猪蛛竹烛逐主煮嘱住助注贮驻柱祝著筑抓爪专砖转赚庄桩装壮状撞追准捉桌着仔兹姿资滋籽子紫字宗综棕踪总纵走奏租足族阻组祖钻嘴最罪醉尊遵昨左作坐座做蔼隘庵鞍黯肮拗袄懊扒芭疤捌跋靶掰扳拌绊梆绑榜蚌谤磅镑苞褒雹鲍狈悖惫笨绷泵蹦匕鄙庇毙痹弊璧贬匾辫彪憋鳖瘪彬斌缤濒鬓秉禀菠舶渤跛簸哺怖埠簿睬惭沧糙厕蹭茬岔豺掺搀禅馋蝉铲猖敞钞嘲澈忱辰铛澄逞秤痴弛侈耻宠畴稠锄雏橱矗揣囱疮炊捶椿淳蠢戳绰祠赐醋簇窜篡崔摧悴粹搓撮挫瘩歹怠贷耽档叨捣祷悼蹬嘀涤缔蒂掂滇巅碘佃甸玷惦奠刁叼迭谍碟鼎董栋兜蚪逗痘睹妒镀缎兑墩盹囤钝咄哆踱垛堕舵惰跺讹娥峨蛾扼鄂愕遏噩饵贰筏矾妃匪诽吠吩氛焚忿讽敷芙拂俘袱甫斧俯脯咐缚尬丐柑竿尴秆橄赣冈肛杠羔膏糕镐疙搁蛤庚羹埂耿梗蚣躬汞苟垢沽辜雇寡卦褂乖棺逛闺瑰诡癸跪亥骇酣憨涵悍捍焊憾撼翰夯嚎皓禾烘弘弧唬沪猾徊槐宦涣焕痪凰惶蝗簧恍谎幌卉讳诲贿晦秽荤豁讥叽唧缉畸箕稽棘嫉妓祭鲫冀颊奸歼煎拣俭柬茧捡荐贱涧溅槛缰桨酱椒跤蕉侥狡绞饺矫剿缴窖酵秸睫芥诫藉襟谨荆兢靖窘揪灸玖韭臼疚拘驹鞠桔沮炬锯娟捐鹃绢眷诀倔崛爵钧骏竣咖揩楷勘坎慷糠扛亢拷铐坷苛磕蝌垦恳啃吭抠叩寇窟垮挎筷筐旷框眶盔窥魁馈坤捆廓睐婪澜揽缆榄琅榔唠姥涝烙酪垒磊肋擂棱狸漓篱吏沥俐荔栗砾痢雳镰敛粱谅晾寥嘹撩缭瞭咧琳鳞凛吝赁躏拎伶聆菱浏琉馏榴咙胧聋窿娄搂篓陋庐颅卤虏赂禄吕侣屡缕峦抡仑沦啰锣箩骡蟆馒瞒蔓莽锚卯昧媚魅氓朦檬锰咪靡眯觅缅瞄渺藐蔑皿闽悯冥铭谬馍摹茉寞沐募睦暮捺挠瑙呐馁妮匿溺腻捻撵碾聂孽拧狞柠泞钮脓疟虐懦糯殴鸥呕藕趴啪耙徘湃潘畔乓螃刨袍沛砰烹彭绪续蓄宣玄悬旋选穴学雪血寻巡询循训讯迅压呀鸦鸭牙绪续蓄宣玄悬旋选穴学雪血寻巡询循训讯迅压呀鸦鸭牙验焰雁燕央扬羊阳杨洋仰养氧痒样腰邀摇遥咬药要耀爷也冶野业叶页夜液一伊衣医依仪夷宜姨移遗疑乙已以矣蚁椅义亿忆艺议亦异役抑译易疫益谊逸意溢毅翼因阴音吟银引饮蚓隐印应英婴鹰迎盈营蝇赢影映硬哟拥永泳勇涌用优忧幽悠尤犹由邮油游友有又右幼诱于予余鱼娱渔愉愚与宇羽雨语玉吁育郁狱浴预域欲喻寓御裕遇愈誉豫元员园原圆袁援缘源远怨院愿曰约月岳钥悦阅跃越云匀允孕运晕韵蕴杂砸灾栽宰载再在咱暂赞脏葬遭糟早枣藻灶皂造噪燥躁则择泽责贼怎曾增赠渣扎眨炸摘宅窄债沾粘展占战站张章涨掌丈仗帐胀账障招找召兆赵照罩遮折哲者这浙针侦珍真诊枕阵振镇震争征挣睁蒸整正证郑政症之支汁芝枝知织肢脂蜘执直值职植殖止只旨址纸指趾至志制治质致智置中忠终钟肿种仲众重州舟周洲轴宙皱骤朱株珠诸猪蛛竹烛逐主煮嘱住助注贮驻柱祝著筑抓爪专砖转赚庄桩装壮状撞追准捉桌着仔兹姿资滋籽子紫字宗综棕踪总纵走奏租足族阻组祖钻嘴最罪醉尊遵昨左作坐座做蔼隘庵鞍黯肮拗袄懊扒芭疤捌跋靶掰扳拌绊梆绑榜蚌谤磅镑苞褒雹鲍狈悖惫笨绷泵蹦匕鄙庇毙痹弊璧贬匾辫彪憋鳖瘪彬斌缤濒鬓秉禀菠舶渤跛簸哺怖埠簿睬惭沧糙厕蹭茬岔豺掺搀禅馋蝉铲猖敞钞嘲澈忱辰铛澄逞秤痴弛侈耻宠畴稠锄雏橱矗揣囱疮炊捶椿淳蠢戳绰祠赐醋簇窜篡崔摧悴粹搓撮挫瘩歹怠贷耽档叨捣祷悼蹬嘀涤缔蒂掂滇巅碘佃甸玷惦奠刁叼迭谍碟鼎董栋兜蚪逗痘睹妒镀缎兑墩盹囤钝咄哆踱垛堕舵惰跺讹娥峨蛾扼鄂愕遏噩饵贰筏矾妃匪诽吠吩氛焚忿讽敷芙拂俘袱甫斧俯脯咐缚尬丐柑竿尴秆橄赣冈肛杠羔膏糕镐疙搁蛤庚羹埂耿梗蚣躬汞苟垢沽辜雇寡卦褂乖棺逛闺瑰诡癸跪亥骇酣憨涵悍捍焊憾撼翰夯嚎皓禾烘弘弧唬沪猾徊槐宦涣焕痪凰惶蝗簧恍谎幌卉讳诲贿晦秽荤豁讥叽唧缉畸箕稽棘嫉妓祭鲫冀颊奸歼煎拣俭柬茧捡荐贱涧溅槛缰桨酱椒跤蕉侥狡绞饺矫剿缴窖酵秸睫芥诫藉襟谨荆兢靖窘揪灸玖韭臼疚拘驹鞠桔沮炬锯娟捐鹃绢眷诀倔崛爵钧骏竣咖揩楷勘坎慷糠扛亢拷铐坷苛磕蝌垦恳啃吭抠叩寇窟垮挎筷筐旷框眶盔窥魁馈坤捆廓睐婪澜揽缆榄琅榔唠姥涝烙酪垒磊肋擂棱狸漓篱吏沥俐荔栗砾痢雳镰敛粱谅晾寥嘹撩缭瞭咧琳鳞凛吝赁躏拎伶聆菱浏琉馏榴咙胧聋窿娄搂篓陋庐颅卤虏赂禄吕侣屡缕峦抡仑沦啰锣箩骡蟆馒瞒蔓莽锚卯昧媚魅氓朦檬锰咪靡眯觅缅瞄渺藐蔑皿闽悯冥铭谬馍摹茉寞沐募睦暮捺挠瑙呐馁妮匿溺腻捻撵碾聂孽拧狞柠泞钮脓疟虐懦糯殴鸥呕藕趴啪耙徘湃潘畔乓螃刨袍沛砰烹彭噶";

static std::array<CharPos, 0x10000> sTable;

VCGXT::VCGXT()
{
	std::for_each(std::begin(MostUsedCharacters), std::end(MostUsedCharacters) - 1, [this](wchar_t chr)
	{
		m_WideCharCollection.insert(chr);
	});
}

bool VCGXT::LoadText(const char *path)
{
	std::ifstream inputFile;

	std::string lineBuffer;

	std::vector<uint16_t> wideLineBuffer;

	std::regex tableFormat(R"-(\[([0-9A-Z_]{1,7})\])-");
	std::regex entryFormat(R"-(([0-9A-Z_]{1,7})=(.+))-");
	std::smatch matchResult;

	std::map<std::string, std::map<std::string, std::vector<uint16_t> >, TableSortMethod>::iterator tableIt;

	m_GxtData.clear();

	inputFile.open(path);

	if (!inputFile)
	{
		std::cout << "Open input file failed.\n";
		return false;
	}

	while (std::getline(inputFile, lineBuffer))
	{
		if (lineBuffer.empty() || lineBuffer.front() == ';')
		{
			continue;
		}
		else if (std::regex_match(lineBuffer, matchResult, tableFormat))
		{
			tableIt = m_GxtData.emplace(matchResult.str(1), std::map<std::string, std::vector<uint16_t> >()).first;
		}
		else if (std::regex_match(lineBuffer, matchResult, entryFormat))
		{
			if (m_GxtData.empty())
			{
				std::cout << "Key " << matchResult.str(1) << "belongs to no table.\n";
				return false;
			}

			UTF8ToUTF16(matchResult.str(2), wideLineBuffer);

			if ((std::count(wideLineBuffer.begin(), wideLineBuffer.end(), '~') % 2) != 0)
			{
				std::cout << "Invalid token format at key: " << matchResult.str(1) << ". Skipped." << '\n';
				continue;
			}

			if (tableIt->second.emplace(matchResult.str(1), wideLineBuffer).second)
			{
				for (uint16_t chr : wideLineBuffer)
				{
					if (chr >= 0x80)
					{
						m_WideCharCollection.insert(chr);
					}
				}
			}
			else
			{
				std::cout << "Repeated entry:\n" << matchResult.str(1) << "\nin table:\n" << tableIt->first << '\n' << '\n';
				return false;
			}
		}
		else
		{
			std::cout << "Invalid line:\n" << lineBuffer << '\n' << '\n';
			return false;
		}
	}

	return true;
}

void VCGXT::SaveAsGXT(const char *path)
{
	FILE *outputFile;
	long foTableBlock, foKeyBlock, foDataBlock;
	int32_t tableBlockSize, keyBlockOffset, keyBlockSize, TDATOffset, firstTDATEntryOffset, dataBlockSize;
	char eightChars[8];

	tableBlockSize = this->m_GxtData.size() * SizeOfTABL;

	outputFile = std::fopen(path, "wb");

	if (outputFile == nullptr)
	{
		std::cout << "Failed to create output file.\n";
		return;
	}

	std::fwrite("TABL", 4, 1, outputFile);
	std::fwrite(&tableBlockSize, 4, 1, outputFile);
	foTableBlock = 8;
	std::fseek(outputFile, tableBlockSize, SEEK_CUR);

	for (auto &table : this->m_GxtData)
	{
		foKeyBlock = std::ftell(outputFile);

		keyBlockSize = table.second.size() * SizeOfTKEY;
		dataBlockSize = GetDataBlockSize(table.second);

		std::memset(eightChars, 0, 8);
		table.first.copy(eightChars, 7);
		std::fseek(outputFile, foTableBlock, SEEK_SET);
		std::fwrite(eightChars, 1, 8, outputFile);
		std::fwrite(&foKeyBlock, 4, 1, outputFile);
		foTableBlock += SizeOfTABL;

		keyBlockOffset = foKeyBlock;
		std::fseek(outputFile, foKeyBlock, SEEK_SET);
		if (table.first != "MAIN")
		{
			std::fwrite(eightChars, 1, 8, outputFile);
		}
		std::fwrite("TKEY", 1, 4, outputFile);
		std::fwrite(&keyBlockSize, 4, 1, outputFile);
		foKeyBlock = std::ftell(outputFile);

		std::fseek(outputFile, keyBlockSize, SEEK_CUR);
		std::fwrite("TDAT", 1, 4, outputFile);
		std::fwrite(&dataBlockSize, 4, 1, outputFile);

		firstTDATEntryOffset = ftell(outputFile);
		
		for (auto &entry : table.second)
		{
			foDataBlock = ftell(outputFile);

			std::memset(eightChars, 0, 8);
			entry.first.copy(eightChars, 7);
			TDATOffset = foDataBlock - firstTDATEntryOffset;
			std::fseek(outputFile, foKeyBlock, SEEK_SET);
			std::fwrite(&TDATOffset, 4, 1, outputFile);
			std::fwrite(eightChars, 1, 8, outputFile);
			foKeyBlock += SizeOfTKEY;
			std::fseek(outputFile, foDataBlock, SEEK_SET);
			std::fwrite(entry.second.data(), 2, entry.second.size(), outputFile);
			
		}
	}

	std::fclose(outputFile);
}

void VCGXT::GenerateWMHHZStuff()
{
	FILE *characters;
	FILE *table;

	unsigned __int8 row = 0;
	unsigned __int8 column = 0;

	sTable.fill({ 63, 63 });

	characters = std::fopen("CHARACTERS.txt", "wb");
	table = std::fopen("wm_vcchs.dat", "wb");

	if (table == nullptr || characters == nullptr)
	{
		std::cout << "Failed to create output file.\n";
		return;
	}

	std::fwrite("\xFF\xFE", 2, 1, characters);

	for (uint16_t chr : this->m_WideCharCollection)
	{
		std::fwrite(&chr, 2, 1, characters);

		sTable[chr].rowIndex = row;
		sTable[chr].columnIndex = column;

		if (column < 63)
		{
			column += 1;
		}
		else
		{
			row += 1;

			std::fwrite(L"\n", 2, 1, characters);

			column = 0;
		}
	}

	std::fwrite(&sTable.front(), 2, 0x10000, table);

	std::fclose(characters);
	std::fclose(table);
}

size_t VCGXT::GetDataBlockSize(const std::map<std::string,std::vector<uint16_t> > &table)
{
	size_t result = 0;

	for (auto &entry : table)
	{
		result += (entry.second.size() * 2);
	}

	return result;
}

void VCGXT::UTF8ToUTF16(const std::string &str, std::vector<uint16_t> &result)
{
	static std::wstring_convert<std::codecvt_utf8<wchar_t> > converter;

	std::wstring wstr = converter.from_bytes(str);
	result.resize(wstr.length() + 1);
	std::copy(wstr.begin(), wstr.end(), result.begin());
	result.back() = 0;
}
