#include <bits/stdc++.h>
using namespace std;

static string rotateLeft(const string& text) {
	if (text.empty()) {
		return text;
	}
	return text.substr(1) + text.front();
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int testCases;
	cin >> testCases;

	while (testCases--) {
		int length, steps;
		cin >> length >> steps;

		string text;
		cin >> text;

		string bestRotation = text;
		int bestIndex = 0;
		int cycleLength = length;

		for (int rotation = 1; rotation < length; ++rotation) {
			text = rotateLeft(text);

			if (text > bestRotation) {
				bestRotation = text;
				bestIndex = rotation;
			}
		}

		text = bestRotation;
		for (int rotation = 1; rotation < length; ++rotation) {
			text = rotateLeft(text);
			if (text == bestRotation) {
				cycleLength = rotation;
				break;
			}
		}

		cout << bestIndex + 1LL * (steps - 1) * cycleLength << '\n';
	}

	return 0;
}
