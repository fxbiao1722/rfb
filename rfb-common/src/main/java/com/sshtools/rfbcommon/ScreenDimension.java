package com.sshtools.rfbcommon;

public class ScreenDimension {
	private int width;
	private int height;

	public ScreenDimension(int width, int height) {
		super();
		this.width = width;
		this.height = height;
	}

	public int getWidth() {
		return width;
	}

	public int getHeight() {
		return height;
	}

	@Override
	public String toString() {
		return "ScreenDimension [width=" + width + ", height=" + height + "]";
	}
}