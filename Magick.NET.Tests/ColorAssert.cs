﻿//=================================================================================================
// Copyright 2013 Dirk Lemstra <http://magick.codeplex.com/>
//
// Licensed under the ImageMagick License (the "License"); you may not use this file except in 
// compliance with the License. You may obtain a copy of the License at
//
//   http://www.imagemagick.org/script/license.php
//
// Unless required by applicable law or agreed to in writing, software distributed under the
// License is distributed on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
// express or implied. See the License for the specific language governing permissions and
// limitations under the License.
//=================================================================================================

using System;
using System.Drawing;
using Microsoft.VisualStudio.TestTools.UnitTesting;

namespace Magick.NET.Tests
{
	//==============================================================================================
	public static class ColorAssert
	{
		//===========================================================================================
		public static void AreEqual(Color expected, Color actual)
		{
			Assert.AreEqual(expected.R, actual.R);
			Assert.AreEqual(expected.G, actual.G);
			Assert.AreEqual(expected.B, actual.B);
			Assert.AreEqual(expected.A, actual.A);
		}
		//===========================================================================================
	}
	//==============================================================================================
}