class ConditionalWidget {
	short mType;
	int mData;
public:
	ConditionalWidget(short type, int data)
		: mType(type), mData(data) { }
	
	int actionIf();
	int actionSwitch();
};

int ConditionalWidget::actionIf() {
	if(mType == 0) {
		return mData + 1;
	} else if(mType == 1) {
		return mData - 3;
	} else if(mType == 2) {
		return mData + 2;
	...
	} else {
		return -1;
	}
}

int ConditionalWidget::actionSwitch() {
	switch(mType) {
		case 0: return mData + 1;
		case 1: return mData - 3;
		case 2: return mData + 2;
		...
		default: return -1;
	}
}
