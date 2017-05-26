class PolymorphicWidget {
protected:
	int mData;
public:
	explicit PolymorphicWidget(int data)
		: mData(data) { }
	virtual ~PolymorphicWidget() = default;
	
	virtual int action() {
		return -1; // Default case
	}
};

class Widget0 : public PolymorphicWidget {
public:
	Widget0(int data)
		: PolymorphicWidget(data) {
	}
	int action() override {
		return mData + 1;
	}
}

class Widget1 : public PolymorphicWidget {
public:
	Widget1(int data)
		: PolymorphicWidget(data) {
	}
	int action() override {
		return mData - 3;
	}
}

class Widget2 : public PolymorphicWidget {
public:
	Widget2(int data)
		: PolymorphicWidget(data) {
	}
	int action() override {
		return mData + 2;
	}
}
...
