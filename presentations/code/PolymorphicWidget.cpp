class PolymorphicWidget {
protected:
	int mData;
public:
	explicit PolymorphicWidget(int d)
		: mData(d) { }
	virtual ~PolymorphicWidget() = default;
	virtual int action() {
		return -1; // Default case
	}
};

class Widget0 : public PolymorphicWidget {
public:
	Widget0(int d) : PolymorphicWidget(d) {
	}
	int action() override {
		return mData + 1;
	}
}
class Widget1 : public PolymorphicWidget {
public:
	Widget1(int d) : PolymorphicWidget(d) {
	}
	int action() override {
		return mData - 3;
	}
}
...
